import java.io.BufferedReader;
import java.io.IOException;
import java.nio.file.FileSystems;
import java.nio.file.Files;
import java.util.Arrays;
import java.util.HashMap;
import java.util.List;
import java.util.stream.Collectors;

public class Permutator {
    static final String alpha = "abcdefghijklmnop";
    int[] state = new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int[] reverseLookup = new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int spin = 0;
    private List<Command> program;

    interface Command {
        void run();
    }

    class Spin implements Command {
        private final int i;

        public Spin(int i) {
            this.i = i;
        }

        @Override
        public void run() {
            spin = (spin + i) % state.length;
        }
    }

    class Xchange implements Command {
        private final int j;
        private final int k;

        public Xchange(int j, int k) {
            this.j = j;
            this.k = k;
        }

        @Override
        public void run() {
            int realJ = realIndex(j);
            int realK = realIndex(k);
            int tmp = state[realJ];
            state[realJ] = state[realK];
            state[realK] = tmp;
            reverseLookup[state[realJ]] = realJ;
            reverseLookup[state[realK]] = realK;
        }
    }

    private int realIndex(int i) {
        int r = i - spin;
        while (r < 0) r += state.length;
        return r;
    }

    class Permute implements Command {
        private final int a;
        private final int b;

        public Permute(int a, int b) {
            this.a = a;
            this.b = b;
        }

        @Override
        public void run() {
            int realJ = reverseLookup[a];
            int realK = reverseLookup[b];
            state[realJ] = b;
            state[realK] = a;
            reverseLookup[b] = realJ;
            reverseLookup[a] = realK;
        }
    }

    Command parse(String s) {
        char c = s.charAt(0);
        String args = s.substring(1);
        if (c == 's') return new Spin(Integer.parseInt(args));
        String[] argsArr = args.split("/");
        if (c == 'x') return new Xchange(Integer.parseInt(argsArr[0]), Integer.parseInt(argsArr[1]));
        if (c == 'p') return new Permute(alpha.indexOf(argsArr[0]), alpha.indexOf(argsArr[1]));
        throw new IllegalArgumentException();
    }

    private void setProgram(List<Command> commands) {
        this.program = commands;
    }

    void run() {
        program.forEach(Command::run);
    }

    private String asString() {
        StringBuilder s = new StringBuilder();
        for (int i = 0; i < state.length; i++) {
            int a = (state.length + i - spin) % state.length;
            s.append(alpha.charAt(state[a]));
        }
        return s.toString();
    }

    private void print() {
        System.out.println(asString());
    }

    public static void main(String[] args) throws IOException {
        BufferedReader reader = Files.newBufferedReader(FileSystems.getDefault().getPath("/home/setorgan/adventcode/input16.txt"));
        String line = reader.readLine();
        Permutator p = new Permutator();
        p.setProgram(Arrays.stream(line.trim().split(",")).map(p::parse).collect(Collectors.toList()));
        HashMap<String, Integer> map = new HashMap<>();
        map.put(p.asString(), 0);
        p.run();
        p.print();
        for (int i = 1; i < 1000000000; i++) {
            Integer cycleStart = map.put(p.asString(), i);
            if (cycleStart != null) {
                System.out.println("Cycle from " + cycleStart + " to " + i);
                int cycleLength = i - cycleStart;
                int remainder = (1000000000 - cycleStart) % cycleLength;
                for (int j = 0; j < remainder; j++) {
                    p.run();
                }
                break;
            }
            p.run();
        }
        p.print();
    }
}
