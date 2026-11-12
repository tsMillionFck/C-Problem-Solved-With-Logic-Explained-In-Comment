// How many times will "Hello, World" be printed in the following program

#include "stdio.h" //Including declerating of standard input output functions that will scan and print data on terminal or file. "Hardware is Keyboard."

int main() {
  int times = 0;
  int i = 1024; // 2 with power 10
  for (; i;
       i >>= 1) { // A loop with no initialized variable, condition of decleared
                  // and defined variable i (Condition returns true until it
                  // becomes 0(anything that is more then 0 is considered true
                  // )), and decrement using i bitwise right shift operator
                  // (binary operator) and equal to operator 1.
    printf("Hello, World\n");
    times++;
  }

  printf("%d", times);

  // For loop prints run the block of code when conditon is true.
  return 0;
} // defining the main function that Compiler will use to run program

// Options: 10, 11, infinite, compile time error
//  My guess is that It will run infinte time.
//  But guess is not we are looking here, we are looking for the logic, so let's
//  make sense of the program.

// Answer is 11, and my logic is that the instructor is using bitwise right
// shift to divide by 2, again and again, until it becomes 0.
//  That's why it is printing 11 times.

// Let's look at one iteration to make it more clear.(To make it clear we need
// to understands how bits together represent a number. 1024 = 0000 0100 0000
// 0000) for-loop checks the variable, and condition(any number greater then 0
// is true, and 0 is false) being true then execture the block. printing "Hello,
// World" on the terminal. After execution, it
//  Then the decrement of the number happens using bitwise right shift operator,
//  that shifts every bit of that number to right. so the next byte becomes 512
//  = 0000 0010 0000 0000, to make it more simple the instructor is dividing the
//  value every time by 2. Thus at 11 it prints "Hello, World", then the
//  decrement happens by right shifting the bit, becoming 512 = 2 (bit location
//  = times) then 256 = 3, 128 = 4, ...., 1 = 11, then the loop runs as the
//  number other then 0 returns false, loop runs for 11 time (as the value of 1
//  is 2^0 which is 1, considered true value) and then i is decremet to 0.
//  condition get's false and loop finally get's terminated/

// What is the value of 'i' after the loop terminates?
// the value of terminate to 2 bytes of 0 bits. (0000 0000 0000 0000)
// What is the value of 'times' after the loop terminates?
// 11
// What is the output of the program?
// 11 times hello world
