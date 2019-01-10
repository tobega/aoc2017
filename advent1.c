#include <stdio.h>

int main(int argc, char *argv[]) {
  int sum = 0;
  char p = '\0';
  for (char* c = argv[1]; *c != '\0'; c++) {
    if (p == *c) {
      sum += p - '0';
    }
    p = *c;
  }
  if (argv[1][0] == p) sum += p - '0';
  printf("%d", sum);
}
