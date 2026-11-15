// Problem Statement is Adding two numbers, without using plus operator. Using
// half adder method Instructor will guide me through it

#include "stdio.h"

int main() {
  int a = 7, b = 19;
  int sum, carry;

  while (b != 0) {
    sum = a ^ b; // Sum of a and b is, A XOR B using half adder method
    carry =
        (a & b)
        << 1; // Carry takes the bits, a & b and left shifting the bits by one.
    a = sum;
    b = carry;
  }

  printf("Sum of two numbers is %d", sum);
  return 0;
}