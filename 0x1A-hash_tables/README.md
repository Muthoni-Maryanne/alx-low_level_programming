# 0x1A. C - Hash tables
Continuation of C that examines hash table data structure.

## Resources
1. [What is a HashTable Data Structure - Introduction to Hash Tables , Part 0](https://www.youtube.com/watch?v=MfhjkfocRR0)
2. [Hash function](https://en.wikipedia.org/wiki/Hash_function)
3. [Hash table](https://en.wikipedia.org/wiki/Hash_table)
4. [How To Implement a Sample Hash Table in C/C++](https://www.digitalocean.com/community/tutorials/hash-table-in-c-plus-plus)
5. [why hash tables and not arrays](https://stackoverflow.com/questions/31930046/what-is-a-hash-table-and-how-do-you-make-it-in-c)

## Summary

#### Defining the Hash Table Data Structures
A hash table is an array of items, which are { key: value } pairs. First, define the item structure:
```
// Defines the HashTable item.

typedef struct Ht_item
{
    char* key;
    char* value;
} Ht_item;
```
Second Hash table definition with items, size and count(return the number of elements in the hash table). 

Note: The hash table has an array of pointers that point to Ht_item, so it is a double-pointer:
```
// Defines the HashTable.
typedef struct HashTable
{
    // Contains an array of pointers to items.
    Ht_item** items;
    int size;
    int count;
} HashTable;
```

#### Creating the Hash Table and Hash Table Items
Create functions for allocating memory and creating items. Create items by allocating memory for a key and value, and return a pointer to the item:
```
Ht_item* create_item(char* key, char* value)
{
    // Creates a pointer to a new HashTable item.
    Ht_item* item = (Ht_item*) malloc(sizeof(Ht_item));
    item->key = (char*) malloc(strlen(key) + 1);
    item->value = (char*) malloc(strlen(value) + 1);
    strcpy(item->key, key);
    strcpy(item->value, value);
    return item;
}
```
Create the table by allocating memory and setting size, count, and items:
```
HashTable* create_table(int size)
{
    // Creates a new HashTable.
    HashTable* table = (HashTable*) malloc(sizeof(HashTable));
    table->size = size;
    table->count = 0;
    table->items = (Ht_item**) calloc(table->size, sizeof(Ht_item*));

    for (int i = 0; i < table->size; i++)
        table->items[i] = NULL;

    return table;
}
```
