#include "stdio.h"

// what is a leap year,
//  rules
//  a leap year is, mathamatically divisible by 4 and not divisible by 100
//  unless it is divisible by 400;
int main() {
  int year;
  printf("Enter Year (Check for leapYear): ");
  scanf("%d", &year);

  if (year % 400 == 0) {
    printf("%d is a Leap Year.", year);
  } else if (100 == 0) {
    printf("Its is not a Leap Year");
  } else if (year % 4 == 0) {
    printf("%d is a Leap Year", year);
  } else {
    printf("It is not a Leap Year");
  }
  return 0;
}