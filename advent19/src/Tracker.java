import java.io.IOException;
import java.io.InputStream;
import java.nio.file.FileSystems;
import java.nio.file.Files;
import java.util.HashMap;
import java.util.Map;
import java.util.Objects;

public class Tracker {
    private final InputStream inputStream;
    private Map<Integer, TrackSegment> openDownwards = new HashMap<>();
    private TrackSegment ongoingHorizontal;
    private TrackSegment fromStart;
    private int position;
    private TrackSegment looseEnd;

    private Tracker(InputStream inputStream) {
        this.inputStream = inputStream;
    }

    public static void main(String[] args) throws IOException {
        InputStream inputStream = Files.newInputStream(FileSystems.getDefault().getPath(args[0]));
        Tracker tracker = new Tracker(inputStream);
        tracker.trackInput();
        System.out.println(tracker.fromStart.getCollected());
        System.out.println(tracker.fromStart.getDistance());
    }

    private void trackInput() throws IOException {
        int r;
        while ((r = inputStream.read()) != -1) {
            char c = (char) r;
            if (c == '\n') {
                position = 0;
                if (ongoingHorizontal != null) {
                    ongoingHorizontal.setEnd(null);
                }
            } else {
                parseChar(c);
                position++;
            }
            if (fromStart != null && fromStart.getEnd() == null) {
                break;
            }
        }
    }

    private void parseChar(char c) {
        switch (c) {
            case '|': vertical(); break;
            case '-': horizontal(); break;
            case '+': turn(); break;
            case ' ': space(); break;
            default: letter(c);
        }
    }

    private void letter(char c) {
        if (ongoingHorizontal != null) {
            ongoingHorizontal.setEnd(position);
            ongoingHorizontal.append(c);
            ongoingHorizontal.increment();
        }
        TrackSegment vertical = openDownwards.get(position);
        if (vertical != null) {
            if (vertical.getEnd() != position) {
                vertical.reverse();
            }
            vertical.append(c);
            vertical.increment();
        }
        if (ongoingHorizontal == null && vertical == null) {
            looseEnd = new TrackSegment(null, position);
            looseEnd.append(c);
        }
    }

    private void space() {
        if (ongoingHorizontal != null) {
            ongoingHorizontal.setEnd(null);
            ongoingHorizontal = null;
        }
        TrackSegment vertical = openDownwards.remove(position);
        if (vertical != null) {
            vertical.setEnd(null);
        }
    }

    private void turn() {
        if (ongoingHorizontal != null) {
            ongoingHorizontal.increment();
            ongoingHorizontal.setEnd(position);
            TrackSegment vertical = openDownwards.remove(position);
            if (vertical != null) {
                join(ongoingHorizontal, vertical);
            } else {
                openDownwards.put(position, ongoingHorizontal);
            }
            ongoingHorizontal = null;
        } else {
            ongoingHorizontal = openDownwards.remove(position);
            if (ongoingHorizontal == null) {
                if (looseEnd != null && looseEnd.getEnd() == position - 1) {
                    looseEnd.setEnd(position);
                    looseEnd.increment();
                    openDownwards.put(position, looseEnd);
                    looseEnd = null;
                } else if (looseEnd != null && looseEnd.getEnd() == position) {
                    ongoingHorizontal = looseEnd;
                    looseEnd.increment();
                    looseEnd = null;
                } else {
                    ongoingHorizontal = new TrackSegment(position, position);
                    openDownwards.put(position, ongoingHorizontal);
                }
            } else {
                ongoingHorizontal.increment();
                if (!Objects.equals(ongoingHorizontal.getEnd(), position)) {
                    ongoingHorizontal.reverse();
                }
            }
        }
    }

    private void join(TrackSegment a, TrackSegment b) {
        if (Objects.equals(b.getStart(), -1) || a.getEnd() == null || Objects.equals(a.getStart(), b.getEnd())) {
            TrackSegment tmp = a;
            a = b;
            b = tmp;
        }
        if (Objects.equals(b.getStart(), a.getStart())) {
            a.reverse();
        } else if (Objects.equals(b.getEnd(), a.getEnd())) {
            b.reverse();
        }
        String joined = a.getCollected() + b.getCollected();
        int distance = a.getDistance() + b.getDistance();
        a.setCollected(joined);
        a.setDistance(distance);
        a.setEnd(b.getEnd());
        b.setCollected(joined);
        b.setDistance(distance);
        b.setStart(a.getStart());
        if (b.getEnd() != null && openDownwards.get(b.getEnd()) == b) {
            openDownwards.put(b.getEnd(), a);
        } else if (a.getStart() != null && a.getStart() != -1 && openDownwards.get(a.getStart()) == a) {
            openDownwards.put(a.getStart(), b);
        }
    }

    private void horizontal() {
        if (ongoingHorizontal == null) {
            if (looseEnd != null && looseEnd.getEnd() == position - 1) {
                ongoingHorizontal = looseEnd;
                looseEnd.increment();
                looseEnd = null;
            } else {
                ongoingHorizontal = new TrackSegment(null, position);
            }
        } else {
            ongoingHorizontal.increment();
        }
        TrackSegment vertical = openDownwards.get(position);
        if (vertical != null) {
            vertical.increment();
        }
    }

    private void vertical() {
        TrackSegment vertical = openDownwards.get(position);
        if (vertical == null) {
            if (fromStart == null) {
                vertical = new TrackSegment(-1, position);
                fromStart = vertical;
            } else {
                if (looseEnd != null && looseEnd.getEnd() == position) {
                    vertical = looseEnd;
                    looseEnd.increment();
                    looseEnd = null;
                } else {
                    vertical = new TrackSegment(null, position);
                }
            }
            openDownwards.put(position, vertical);
        } else {
            vertical.increment();
        }
        if (ongoingHorizontal != null) {
            ongoingHorizontal.increment();
        }
    }

    private static class TrackSegment {
        private Integer start;
        private Integer end;
        private String collected = "";
        private int distance = 1;

        public TrackSegment(Integer start, int end) {
            this.start = start;
            this.end = end;
        }

        public void setEnd(Integer end) {
            this.end = end;
        }

        public Integer getEnd() {
            return end;
        }

        public Integer getStart() {
            return start;
        }

        public void setStart(Integer start) {
            this.start = start;
        }

        public void reverse() {
            collected = new StringBuilder(collected).reverse().toString();
            Integer tmp = start;
            start = end;
            end = tmp;
        }

        public String getCollected() {
            return collected;
        }

        public void setCollected(String collected) {
            this.collected = collected;
        }

        public void append(char c) {
            this.collected += c;
        }

        public void increment() {
            distance++;
        }

        public int getDistance() {
            return distance;
        }

        public void setDistance(int distance) {
            this.distance = distance;
        }
    }
}
