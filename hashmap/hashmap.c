#include <stdlib.h>
#include <assert.h>
#include <string.h>

#include "hashmap.h"

#define INITIAL_SIZE (1024)
#define GROWTH_FACTOR (2)
#define MAX_LOAD_FACTOR (1)

struct node {
  struct node *next;
  char *key;
  char *value;
};

struct dict {
    int size;           /* size of the pointer table */
    int elements;              /* number of elements stored */
    struct node **table;
};

Dict initalizer(int size) {
  Dict words;
  int i= 0;

  words = malloc(sizeof(*words));
  //check if null
  assert(words!= 0);

    //(*a).b = ->
    words->size = size;
    words->elements = 0;
    words->table = malloc(sizeof(struct node *) * words->size);

    assert(words->table != 0);

    for(i = 0; i < words->size; i++) {
      words->table[i] = 0;
    }

    return d;
}

Dict makeDict(void){
  return initializer(INITIAL_SIZE);
}

Dict makeDict(void);
