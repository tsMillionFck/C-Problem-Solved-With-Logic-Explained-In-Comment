#include "math.h"
#include "stdio.h"

// 1001, 1 0 0 1, 1 x 2 ^ i = 0.
// Need decimal variable
int main() {
  int binary = 0; // how do we calculate the length of the number to be
                  // used in Loop?

  printf(
      "Please Enter a Binary Number: "); // We take the input from the user for
                                         // binary Number. Note (If user did not
                                         // enter number other then 0 1 their is
                                         // not logic to prevent that.)
  scanf("%d", &binary); // Scan and read the Input into binary memory address
  int decimal = 0;      // Variable to hold the decimal number Sum.

  int i = 0; // Variable that tracks at which power is at 2. Like 2^0, 2^1,
  // 2^2.// 2^i.
  int r; // Variable that hold the remainder. As we are going to use modulus
         // operator with 10, which returns the last digit of given interger.
  while (binary != 0) { // Looping till the given Binary number terminates to 0.
    r = binary % 10;    // Using modulus operator to extract the last number.
    r = r * (pow(2, i)); // We multiple that number with 2^i, 2^i is also known
                         // as binary Base representation.
    decimal += r; // Then we add that number to decimal, to get the total sum.
    binary = binary / 10; // Then I terminate the last digit, so next times the
                          // last is the previous second last.
    i++; // We increment the variable i, so after every iteration the power of 2
         // increase with the digit from right to left.
  }

  printf("%d", decimal); // Print the value
  return 0;
}