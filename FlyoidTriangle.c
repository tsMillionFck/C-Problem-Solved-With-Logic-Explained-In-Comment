#include "stdio.h"

int main() {
  // 1
  // 2 3
  // 3 4 5
  int n = 1;
  int rows;

  printf("Enter the number of Rows: ");
  scanf("%d", &rows);

  for (int i = 0; i < rows; i++) {
    // this is to loop through rows
    for (int j = 0; j <= i; j++) {
      // This loop is for elements
      printf("%d\t", n);
      n++;
    }
    printf("\n"); // to change the rows
  }

  return 0;
}