#include <stdio.h>
#include <stdlib.h>

/* program that utilizes two pointers to create an 2D array */

void matrix(rows, cols) {
  int **matrix;
  //allocating memory for the matrix
  matrix = (int**)malloc(rows * (sizeof(int*)));

}


int main() {
  //asking user for how many rows and cols and storing them
  int rows, cols = 0;
  printf("enter amount of rows: ");
  scanf("%d", &rows);

  printf("\n");

  printf("enter amount of columns: ");
  scanf("%d", &cols);

  printf("\n");

  matrix(rows, cols);

}