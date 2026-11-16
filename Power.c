// 2 ^ 3 = 8
//  2 times 3, means 2 multiple to it self 3 times [Loopppppsss....]

// we need variable a, x. a representing the base, x representing the power or
// exponent then we are going to loop it, using a variable of i. till i = x, in
// loop we multiply to number to itself we need a variable to store the result,
// let's initialize it to 1, not 0 because if we multiply anything with 0, it
// will be 0... Yess.
#include "stdio.h"

int main() {
  int a, e;
  int result = 1;

  printf("Enter the base number: ");
  scanf("%d", &a);
  printf("Enter the exponent: ");
  scanf("%d", &e);

  int i = 0;
  if (e > 0) {
    while (i != e) {
      result *= a;
      i++;
    }
  } else {
    while (i != e) {
      result *= 1 / a;
      i--;
    }
  }
  printf("The result of %d to exponent %d is %d", a, e, result);
  return 0;
}