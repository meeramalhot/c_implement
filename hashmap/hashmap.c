#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*implementing a hashmap*/

//linked list
struct node {
  // key is string
  char * key;
 
  // value is also string
  char * value;
  struct node* next;
};
 