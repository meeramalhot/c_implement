typedef struct dict *Dict;

/* create a new empty dictionary */
Dict initalizer(int size);
Dict makeDict(void);

/* free memory dictionary uses*/
void freeDict(Dict);

/* insert a new key-value pair into an existing dictionary */
void insertDict(Dict, const char *key, const char *value);

/* return the most recently inserted value associated with a key */
/* or 0 if no matching key is present */
const char *DictSearch(Dict, const char *key);

/* delete the most recently inserted record with the given key */
/* if there is no such record, has no effect */
void DictDelete(Dict, const char *key);
