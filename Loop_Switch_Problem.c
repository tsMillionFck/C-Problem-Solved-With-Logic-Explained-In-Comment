// Loop_Switch_Problem.c: What is the output of the following C program
// fragment?
#include "stdio.h"

int main() {
  int i; // initialization the variable by giving him 4 bytes of memory.
  for (i = 0; i < 20; i++) {
    switch (i) {
    case 0:
      i += 5;
    case 1:
      i += 2;
    case 5:
      i += 5;
    default:
      i += 4;
    }
    printf("%d", i);
  }
}

// Options: (a) 5 10 15 20, (b) 7 12 17 22, (c) Compile error, (d) 16 21.
// Answer: (c) Compile error, why? but (a) seems the right answer. Yes it is but
// we have to look at the switch code, we are not breaking any case so every
// case runs even if i does not match with the case. Thus the compiler gives
// error

// Well I was wrong, the answer is (d). the code compiled successfully and gives
// output 16 21, as every case get evaluate at first iteration i becomes 16
// ([case: value], [0,5], [1, 7], [5, 11], [default, 16]), the switch get's
// terminated, first iternation of loop ends, incrementing i++ makes 16 to 17.
// the next iteration begains, condition is true (17 < 20), then loops get's
// executed, the switch checks the i = 17, no case match falls to default [17+4
// = 21] also get's print;
// Iteration ends, incremented the value making ++21 (21 + 1 = 22), condition of
// loop is checked 22 < 20 false the loop terminates, and program gets ended.

// Learning is not only doing it yourself but accepting your false logic and
// then fixing your logic