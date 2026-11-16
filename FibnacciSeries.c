#include "stdio.h"

int main() {
  int result, a = 0, b = 1, n; // fib(n) = fib(n-1) + fib(n-2);
  // a = 0, b = 1
  int i = 0;
  printf("Enter to find n numbers of Fibnacci Series: ");
  scanf("%d", &n);
  while (i != n) {
    printf("%d\t", a);
    result = a + b;
    a = b;
    b = result;
    i++;
  }

  return 0;
}