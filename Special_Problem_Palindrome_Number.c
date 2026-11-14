#include "stdio.h"

int main() {
  int num;
  int result = 0, q, rem;

  printf("Enter a Number to check for Palindrome:\t ");
  scanf("%d", &num);

  q = num; // Copying the org number into temp varible to process logic

  while (q != 0) {
    rem = q % 10; // Modules the q by 10 to get the last digit.

    result =
        result * 10 + rem; // As decimal value has the base of 10, we multiply
                           // the result with 10 to add the new digit.
    q = q / 10; // We then remove the last digit from the quotient. so next time
                // second last digit get's remainder.
  };

  // Conditional Statement
  if (result == num) {
    printf("%d It's Palindrome", num);
  } else {
    printf("%d It's not Palindrome", num);
  }

  return 0;
}