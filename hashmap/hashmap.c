#include <stdlib.h>
#include <assert.h>
#include <string.h>

#include "hashmap.h"

#define INITIAL_SIZE (1024)
#define GROWTH_FACTOR (2)
#define MAX_LOAD_FACTOR (1)

typedef struct node {
    struct node *next;
    char *key;
    char *value;
} node;

struct dict {
    int size;           /* size of the pointer table */
    int n;              /* number of elements stored */
    struct node **table;
};

Dict initalizer(int size) {
  Dict d;
  int i= 0;

  assert(d!= 0);

}

Dict makeDict(void){
  return initializer(INITIAL_SIZE);
}

Dict makeDict(void);
