#include <stdio.h>

int main(int argc, char *argv[]) {
  int sum = 0;
  int depth = 0;
  int garbage = 0;
  int removed = 0;
  char c;
  while ((c = getchar()) >= 0) {
    if (c == '>') {
      garbage = 0;
    } else if (garbage && c == '!') {
      getchar();
    } else if (garbage) {
      removed++;
      continue;
    } else if (c == '{') {
      depth++;
    } else if (c == '}') {
      sum += depth;
      depth--;
    } else if (c == '<') {
      garbage = 1;
    }
  }
  printf("%d %d\n", sum, removed);
}

