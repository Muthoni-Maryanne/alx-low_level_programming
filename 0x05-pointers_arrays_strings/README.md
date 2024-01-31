# 0x05. C - Pointers, arrays and strings

This is a continuation of C that examines pointers, arrays and strings. 

## Concepts

1. ALX concept page which looks at: types and memory, storing memory addresses, derefrencing, function parameters are passed by value, arrays, pointer vs array (an array is not a pointer but name holds address of first element- array type decay),pointer arithmetic and strings.


## Resources

##Summary

**NOTE:** when using sizeof() and &, the name of the array is not considered as address of first element but as whole array. 

**NOTE:** Pointer arithmetic is for both pointers and arrays.

**NOTE:** Strings are arrays of chars.

Pointer declaration: ```var_type *var;```

Example of derefrencing:

```
#include <stdio.h>

/**
 * main - derefencing pointers, example with int and char types
 *
 * Return: Always 0.
 */
int main(void)
{
   int n;
   int *p;
   char c;
   char *pp;

   c = 'H';
   pp = &c;
   n = 98;
   p = &n;
   printf("Value of 'c': %d ('%c')\n", c, c);
   printf("Address of 'c': %p\n", &c);
   printf("Value of 'pp': %p\n", pp);
   printf("Value of 'n': %d\n", n);
   printf("Address of 'n': %p\n", &n);
   printf("Value of 'p': %p\n", p);
   *p = 402;
   *pp = 'o';
   printf("Value of 'n': %d\n", n);
   printf("Value of '*pp': %d\n", *pp);
   printf("Value of 'c': %d ('%c')\n", c, c);
   printf("Value of '*pp': %d ('%c')\n", *pp, *pp);
   return (0);
}
```

Example that it is possible to modify a variable from outside the function it is declared, using a pointer:

```
void modif_my_char_var(char *cc, char ccc)  
{
   *cc = 'o';                  /* pointer cc has same value as pointer p */
                                /* points to &c so can dereference and modify from 'H' to 'o' */
   ccc = 'l';                    /* ccc value changes from 'H' to 'l' */
}

/**
 * main - Solve me
 *
 * Return: Always 0.
 */
int main(void)
{
   char c;                        /* character variable declared */
   char *p;                       /* pointer pointing to char declared */

   p = &c;                        /* pointer p pointing to address of c */
   c = 'H';                       /* c given value 'H' */
   modif_my_char_var(p, c);       /* modify_my_char_var called */
                                  /* pointer p's value &c copied to cc */
                                  /* char c's value 'H' copied to cc*/

  /* When we return to main, ccc no longer exists but it's value stays in memory */
  /* cc is also destroyed but the value of c is still 'o' */
   return (0);                    
}
```
Array declaration: ``` type var_name[number_of_elements]; ```

Ways to initialize arrays:
```
/* At compile time */
int a[3] = {1, 2, 3};
int a[] = {1, 2, 3};
int a[3] = {1, 2}  /* less items than specified, the rest will be filled with 0 */
int a[3];                           /* alternative using notation: *(var + x) that uses pointer arithmetic*/
a[0] = 1;                           /* *a = 'A'; */
a[1] = 2;                           /* *(a + 1) = 'L'; */
a[2] = 3;                           /* *(a + 2) = 'X'; */

char b[6] = {'J', 'e', 'n', 'n', 'y'};
char b[] = "Jenny";
```

```
/* At run time using scanf and loop */
#include <stdio.h>
int a[5];
int i;
for (i = 0; i < 5; i++)
{
  printf("Enter values: ");
  scanf("%d", &a[i]);
}
printf("%d %d %d %d %d", a[0], a[1], a[2], a[3], a[4]);
```
Strings declaration:
```
#include <stdio.h>
int main(void)
{
int a[3];
a[0] = 'A';
*(a + 1) = 'L';
*(a + 2) = 'X';
printf("%c%c%c\n", a[0], a[1], a[2]);
}
```
```
/* Have to declare items + 1 for '\0'(ascii value = 0) which normally ends strings*/
/* This statement will copy the string “School” into the variable a */
char a[7] = "School";
```
Above "School" is a string stored in the read only part of memory.
It is copied to the array a. The copied value is changeable.
Strings also have values in C: the address of their first character in memory.

Example:

```
#include <stdio.h>

/**
 * main - Prints the value of a string
 *
 * Return: Always 0.
 */
int main(void)
{
   char a[7] = "School";

   printf("%s\n", a);                                    /*a is value of whole string*/
   printf("Value of the last char of a: %d\n", a[9]);    /* Last character is 0/ numm byte */
   printf("Value of a: %p\n", a);                        /* Address of first character */
   printf("Value of \"School\": %p\n", "School");        /* Address of string School in rodata */
   return (0);
}
```
How memory looks:

![1](https://github.com/Muthoni-Maryanne/alx-low_level_programming/assets/107298263/7fcd3e66-1539-4170-9b18-20b42cd18ce5)


## Tasks

