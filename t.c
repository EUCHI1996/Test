#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
  long int sum = 0, i, n = 42;
  for (i = 1; i <= n; i++) {
    sum += i;
  }
  printf("\\sum_{i=1}^{%ld} i = %ld\n", n, sum);
  return EXIT_SUCCESS;
}
