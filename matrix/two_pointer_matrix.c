#include <stdio.h>
#include <stdlib.h>

/* program that utilizes two pointers to create an 2D array */


int print_matrix(rows, cols) {
  int **matrix;
  //allocating memory for rows of the matrix
  matrix = (int**)malloc((sizeof(int*) * rows));
  //allocating memory for columns of the matrix
  for (int i = 0; i<rows; i++){
    matrix[i] = (int *)malloc(sizeof(int) * cols);
  }

  //fill the matrix with random values 
  for (int i = 0; i<rows; i++){
    for (int j = 0; i<cols; j++){
      int value = rand();
      matrix[i][j] = value;
    }
  }

  //print matrix
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      printf("%d ", matrix[i][j]);
    }
       printf("\n");
  }
  
  //free memory used for cols
  for (int i = 0; i<rows; i++) {
      free(matrix[i]);
  }
  //free memory used for rows
  free(matrix);

  return(0);
}



int main(void) {
  //asking user for how many rows and cols and storing them
  int rows, cols = 0;
  printf("enter amount of rows: ");
  scanf("%d", &rows);

  printf("\n");

  printf("enter amount of columns: ");
  scanf("%d", &cols);

  printf("\n");

  print_matrix(rows, cols);

  return(0);
}