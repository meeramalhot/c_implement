#include <assert.h>
#include <stdlib.h>
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
} Dict;

