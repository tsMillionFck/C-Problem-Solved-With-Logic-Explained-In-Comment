#include "stdio.h"
#include "string.h"
#include <string.h>

int main() {

  // To find the Palidrome of string.
  char name[] = "racecar"; // String that we need to check for palidrome.
  char opp[10]; // An another char varible where we are adding the reverse of
                // the original string.
  for (int i = strlen(name); i >= 0;
       i--) { // Starting a for loop to reverse the number, that runs from the
              // length of the string, till 0 and saves every character to the
              // opp variable.
    strncat(opp, &name[i],
            1); // using a string function defined in string header file, to add
                // every character of string to opp varible, which adds \0
                // automatically at the end.
  }
  int count = 0; // now we need a counter which will check how many words are
                 // similar at same position on both strings. If the count
                 // matches the string length then it's palidrome else it's not
  for (int i = 0; i < strlen(name); i++) {
    if (name[i] == opp[i]) { // Comparing strings at every position.
      count++;               // Increasing the count if character are same.
    }
  }
  if (count ==
      strlen(name)) {     // Checking if the count matches the string length.
    printf("Palindrome"); // if does it's Palindrome
  } else {
    printf("Not a Palindrome"); // if not it's not Plaidrome.m
  }
  return 0;
}