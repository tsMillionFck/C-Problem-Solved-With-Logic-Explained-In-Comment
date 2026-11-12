// Problem: How many times Neso Acadamy is printed?

#include "stdio.h"
int main() {
  signed int i = -5; // declearing variable has default modifier of signed (-ve
                     // to +ve number)
  while (i <= 5) {   // while loop that runs until the condition is false,
                     // condition is i is less than equal to 5
    if (i >= 0) {    // Inside loop their is a if condition that get's executed
                     // when i is more then equal to 0.
      break;         // terminating to loop completely.
    } else {    // else block of code, if (if condition get's false this runs).
      i++;      // Post incrementing the variable i
      continue; // then skipping to next iternation.
    }
    printf("Neso Acadamy"); // Sorry little guy treat never reaches you :)
  }
  return 0;
}

// Options: 10 times, 5 times, Infinte times, 0 times
// Answer: 0 times, as their is condition that if i >= 0 then loop breaks, else
// loop increment and skip to next iteration, thus nero acadmany never executed
// as before it's loop either get's skipped or terminated