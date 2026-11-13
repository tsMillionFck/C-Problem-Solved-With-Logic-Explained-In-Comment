#include "stdio.h"

// This problem was given to print the star pyramid in the terminal, now I
// undestand how we print but not fully understand to use to flip the pyramid

int main() {

  int n = 10;

  // required pyramid is 4x7

  for (int i = 1; i <= n; i++) {           // rows loop
    for (int j = 1; j <= 2 * n - 1; j++) { // column loop
      if (j >= -(i - 1) &&
          j <= n + (i - 1)) { // Conditional statments stating that only print
                              // "*", when j is greater than n - (i - 1) and
                              // less than n + (i - 1)
        printf("*");          // print the star
      } else {
        printf(" "); // print the space if condition does not matched.
      }
    }
    printf("\n");
  }
  return 0;
}