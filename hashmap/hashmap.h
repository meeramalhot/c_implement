typedef struct dict *Dict;

//create a new empty dictionary
Dict makeDictionary(void);

// delete an entire dictionary
void deleteDictionary(Dict);

// insert a new key-value pair into an existing dictionary
void insertDictionary(Dict, const char *key, const char *value);

//return the most recently inserted value associated with a key and 0 if no key
const char *searchDictionary(Dict, const char *key);

//delete the most recently inserted record with the given key
//if there is no such record, has no effect
void (Dict, const char *key);