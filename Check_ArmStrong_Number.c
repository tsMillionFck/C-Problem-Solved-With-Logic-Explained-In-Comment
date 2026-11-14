#include "stdio.h"
// So and ArmStrong number of an order n is each number multiply with itself
// order n number of times, then added together resulting in the same number.

// For example 371, of order 3. 3*3*3 + 7*7*7 + 1*1*1 = 27 + 343 + 1 = 371

int main() {
  int num = 371; // The number we need to check if ArmStrong or not.
  int q, rem, result = 0,
              p = 3; // Defining the varibles needed to apply the logic.
  q = num;           // Copying the org number into a temp variable.

  while (q !=
         0) { // Applying a while loop with condition till q is not equalt to 0
    rem = q % 10; // getting the last number
    int a = 1;    // Defined a varible that will be used to store the
                  // multiplication of number to it self order n times
    for (int i = 0; i < p; i++) {
      a = a * rem; // Multiplying the number order n times to itself.
    }
    printf("%d\t", a);   // Printing the result of multiplication
    result = result + a; // Adding it to the result varible.
    q = q / 10;          // Removing the last number from the quotient.
  }

  if (result == num) { // Applying the condition to check if its a ArmStrong
                       // number or not, if result is equal equal to the org num
                       // it's arm strong else not.
    printf("\n%d is a Armstromg Number\n", num);
  } else {
    printf("%d is not ArmStrong Number\n", num);
  }

  return 0;
}
