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
