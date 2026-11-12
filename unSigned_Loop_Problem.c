// What is the output of the follwing C program fragment, Assuming the size of
// unsigned int to be 4 bytes (32 bit).

#include "stdio.h"

int main() {
  unsigned int i = 500; //+ve number with range of (0, 2^32);
  while (i++ !=
         0) // as this while loop has no body, the condition is checked untill
            // 2^32 with post incrementation(first use the value, evaluate the
            // expression then increment). At 2^32, the condition is checked:
            // true and value get's incrmeneted by 1 (as 4bytes is max after
            // that we comes back to 0) no body so we comes back to condition,
            // condition satisifed loop teminates, value of i is incremented due
            // to being post increment
    ;
  printf("%d", i); // 1 get's printed as i++ evalualte after 0, becoming 1 then
                   // the answer becomes 1.
  return 0;
}

// Options: Infiite times, 0, 1, Compile error
// Answer: 1
// I had no clue it will go this deep, but learning my way up.