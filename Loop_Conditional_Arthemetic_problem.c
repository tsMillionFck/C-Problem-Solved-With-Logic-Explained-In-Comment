#include "stdio.h"

int main() {
  int x = 3;  // we define the varible, declearing and initalizing.
  if (x == 2) // First coditional check, is x is equal to 2, no it's not.
    ;         // First conditional expression ended.
  x = 0;      // then we redefine the variable to 0;
  if (x == 3) // then we create another conditional check to see if x = 3; not
              // it's not.
    x++;      // This code of block did not executed.
  else        // since no condition get's execute else block get's executed.
    x += 2;   // x becomes x + 2 which is 0 + 2 = 2;

  printf("%d", x);
  return 0;
}

// Output of this code is 2