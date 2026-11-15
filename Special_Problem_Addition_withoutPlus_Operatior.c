// Problem statment is that, I have to create a program that adds two number
// Without using plus operation.
// Instructor will guide me through it. (Neso Acadamy)

#include "stdio.h"

int main() {
  // We are using an Algorithm that states that, while incrementing first
  // number, you have to decrement the second number till second number becomes
  // 0;
  int a, b, sum; // Right here they are garbage values,
  printf("Garbage value of a: %d\n", a);
  printf("Garbage value of b: %d\n", b);

  printf("Enter First Number: \t");
  scanf("%d", &a);
  printf("\nEnter Second Number: \t");
  scanf("%d", &b);

  //   for (int i = 0; i < b; i++) {
  //     a--;
  //   }

  if (b > 0) {
    sum = a;
    int i = b;
    while (i != 0) {
      sum++;
      i--;
    }
  } else if (b < 0) {
    sum = a;
    int i = b;
    while (i != 0) {
      sum--;
      i++;
    }
  }

  printf("The Sum of %d + %d = %d", a, b, sum);
  return 0;
}