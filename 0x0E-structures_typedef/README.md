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

Initialization:

```struct date today = {7, 2, 2005};```

```struct time time1 = {.hour = 2, .minutes = 30, .seconds = 10};```

Compound literals: Assign one or more values to a struct in a single statement. Example:
```
struct date today;
//must be in order
today = (struct date){9, 25, 2004};
//Alternative that must not be in order
today = (struct date){.day = 25, .year = 2004, .month = 9};
```
**Structure definition variants**
```
/* Can declare struct members in definition*/
struct date
{
	int month;
 	int day;
  	int year
   } todaysDate, purchaseDate;
```
```
/*  Can declare struct members in definition and assign values */
struct date
{
	int month;
 	int day;
  	int year
   } todaysDate = {12, 02, 2024};
```

**Array of structures**
Can handle more than one set of members. Example of an array experiments that contains 3 elements of type struct time: ```struct time experiments[3];```

Initialization method 1 for first members:
```
experiments[0].hour = 12;
experiments[0].minutes = 50;
experiments[0].seconds = 36;
```

Initialization method 2:
```
struct time experiments[3] = {{12, 50, 36}, {5, 30, 56}, {23, 59, 59}};
struct time experiments[3] = {12, 50, 36, 5, 30, 56, 23, 59, 59};
struct time experiments[3] = {{[1].hour = 12, [1].minutes = 50, [1].seconds = 36};
```

**Structures within structures** 

Example:
```
struct time
{
	int hours;
	int minutes;
	int seconds;
};

struct date
{
	int day;
	int month;
	int year;
};

struct DateAndTime
{
	struct time stime;
	struct date sdate;
};
```
a. Defining variables for one set of members: ```struct DateAndTime event;```

To reference a particular member: ```event.sdate.month = 10;```

Initialization:
```
struct DateAndTime event = {{12, 10, 50}, {22, 02, 2024}};
struct DateAndTime event = {{.hour = 12, .minutes = 10, .seconds = 50}, {.day = 22, .month = 02, .year = 2024}};
```

b. Defining variables for multiple set of members: ```struct DateAndTime event[3];```

To set member of element 1 example:
```
events[0].stime.hour = 12;
events[0].stime.minutes = 50;
event[0].stime.seconds = 10;
```

**Structures containing arrays**
```
struct month
{
	int numberOfDays;
	char name[3];
};
```
Initialization:
```
struct month Month = {31, {'J', 'A', 'N'}};

//Alternative way to fill in members
Month.numberOfDays = 31;
Month.name[0] = 'J';
Month.name[1] = 'A';
Month.name[2] = 'N';
```
**Structures containing arrays and an array of struct elements**
```
struct month months[12];
const struct month months[12] =
{ { 31, {'J', 'a', 'n'} }, { 28, {'F', 'e', 'b'} },
{ 31, {'M', 'a', 'r'} }, { 30, {'A', 'p', 'r'} },
{ 31, {'M', 'a', 'y'} }, { 30, {'J', 'u', 'n'} },
{ 31, {'J', 'u', 'l'} }, { 31, {'A', 'u', 'g'} },
{ 30, {'S', 'e', 'p'} }, { 31, {'O', 'c', 't'} },
{ 30, {'N', 'o', 'v'} }, { 31, {'D', 'e', 'c'} } };
```
 5. [The Lost Art of Structure Packing](http://www.catb.org/esr/structure-packing/)
 6. [Typedef](https://publications.gbdirect.co.uk//c_book/chapter8/typedef.html)
 
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

## Tasks

**Task 0:** [dog.h](https://github.com/Muthoni-Maryanne/alx-low_level_programming/blob/master/0x0E-structures_typedef/dog.h)- Define a new type struct dog in dog.h header file. Test with [0-main.c](https://github.com/Muthoni-Maryanne/alx-low_level_programming/blob/master/0x0E-structures_typedef/0-main.c)

![0](https://github.com/Muthoni-Maryanne/alx-low_level_programming/assets/107298263/9cfeaf66-f4e3-43d0-9d3f-0581fcd2ef9d)

**Task 1:**
