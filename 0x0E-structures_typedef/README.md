# 0x0E. C - Structures, typedef

This is a continuation of C programming that introduces structs and typedef

## Resources

1. [struct (C programming language)](https://en.wikipedia.org/wiki/Struct_(C_programming_language))

Syntax for struct declaration: 
```
struct tag_name {
   type member1;
   type member2;
   /* declare as many members as desired, but the entire structure size must be known to the compiler. */
};
```
Example:
```
/* Declare the struct with integer members x, y */
struct point {
   int x;
   int y;
};
```
Initialization:

a. For contiguous members:
```
/* Define a variable p of type point, and initialize its first two members in place */
struct point p = { 1, 2 };
```
b. For non-contiguous or out of order members list:
```
/* Define a variable p of type point, and set members using designated initializers */
struct point p = { .y = 2, .x = 1 };
```
c. copy values of an existing object
```
/* Define a variable q of type point, and set members to the same values as those of p */
struct point q = p;
```

2. [Documentation: Data structures](https://github.com/alx-tools/Betty/wiki/Documentation:-Data-structures)
Besides functions you can also write documentation for structs, unions, enums and typedefs. Example for struct:

```
/**
 * struct my_struct - Short description
 * @a: First member
 * @b: Second member
 *
 * Description: Longer description
 */
struct my_struct
{
	int a;
	int b;
	/**
	 * @c: This is longer description of C
	 *
	 * Description: You can use paragraphs to describe arguments
	 * using this method.
	 */
	int c;
};
```
Note: Describing arguments within the body should be used only for struct/enum members.

 3. Programming in C by Stephen Kochan - Chapter 9, Working with Structures p163-189


 4. [The Lost Art of Structure Packing](http://www.catb.org/esr/structure-packing/)
 5. [Typedef](https://publications.gbdirect.co.uk//c_book/chapter8/typedef.html)
 
Used to give a type a new name. For example:
```
typedef int aaa, bbb, ccc;
typedef int ar[15], arr[9][6];
typedef char c, *cp, carr[100];

/* now declare some objects */

/* all ints */
aaa     int1;
bbb     int2;
ccc     int3;

ar      yyy;    /* array of 15 ints */
arr     xxx;    /* 9*6 array of int */

c       ch;     /* a char */
cp      pnt;    /* pointer to char */
carr    chry;   /* array of 100 char */
```

can also use typedef with structures to define a new data type:
```
typedef struct User User;

typedef struct User
{
	char *name;
	char *email;
	int age;
} user;

int main(void)
{
	struct User user;
	User user2;

	return (0);
}
``` 



