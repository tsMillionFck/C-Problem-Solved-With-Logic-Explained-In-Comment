#include "stdio.h"

int a, b;

void print() { printf("%d %d", a, b); }

int fun1() {
  int a, c;
  a = 0, b = 1, c = 2;
  return c;
}

void fun2() {
  int b;
  a = 3, b = 4;
  print();
}

int main() { // This goes in call stack first with local variable a and memory
             // address to return to. No parameters
  int a = fun1(); // Variable a is initialised with value return from fun1();
  // Fun1() goes upper the main function in stack, with variable a = 0,c = 2
  // this are local variable and global b = 1. Return address to a and no
  // Parameters

  // Now in main function scoping, the value of a becomes 2 as fun1() return c.
  // (which is 2 in fun1() scoping)

  // Then the fun1() pop out of the call stack

  fun2(); // fun2() get's push into the call stack after main function, it
          // Activation record is variable b. Values it hold is a = 3 and b = 4;
          // with return address to main function where it left.
          // It also contain a print() function which print string on terminal.

  // Now as print is called inside fun2() so it will print the value of a and b
  // in fun2() scoping. which is a = 3 and b = 4. That is dynamic Scoping.

  // In Static Scoping: It will print 3 & 1 (3 from fun2's global a = 3 & b = 1
  // from fun1() global b = 1)

  return 0;
}