#include "stdio.h"
// So and ArmStrong number of an order n is each number multiply with itself
// order n number of times, then added together resulting in the same number.

// For example 371, of order 3. 3*3*3 + 7*7*7 + 1*1*1 = 27 + 343 + 1 = 371

int main() {
  int num = 371; // The number we need to check if ArmStrong or not.
  int order = 0, rem, result = 0, ctn,
      mul = 1; // Defining the varibles needed to apply the logic.
  int q = num; // Copying the org number into a temp variable.

  while (q != 0) {
    q = q / 10; // Removing last number from the temp varible
    order++;    // Incrementing the count by 1.
  }
  ctn = order;
  q = num;

  while (q != 0) {
    rem = q % 10;      // Getting the last digit from the number
    while (ctn != 0) { // Looping till the temp varible containing order of the
                       // number is 0;
      mul = mul * rem; // Multiplying the rem with mul varible
      ctn--;           // Post Decrementing the ctn.
    }
    result = result + mul; // Adding mul to result
    q = q / 10; // Removing the last digit from the temp variable holding the
                // org variable
    ctn = order; // Re-assigning order to ctn to continue loop for next
                 // variable.
    mul = 1; // re-assigning mul to 1, so logic works correctly.
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
