# 0x0F. C - Function pointers

This is a continuation of C that looks at pointers to functions.

## Resources

1.  [Pointers to Functions](https://publications.gbdirect.co.uk//c_book/chapter5/function_pointers.html)
   
```
/* pointer to function returning int */
int (*func)(int a, float b);

  /* function returning pointer to int */
int *func(int a, float b);
```
Example:
```
#include <stdio.h>
#include <stdlib.h>

void func(int);

main()
{
      /* Declare pointer to function */
      void (*fp)(int);

      /* assign address of func to pointer function fp */
      fp = func;

      /* calling function using pointer instead of directly with func(1)*/
      (*fp)(1);   /* first method */
      fp(2);      /* second method */

      exit(EXIT_SUCCESS);
}

void func(int arg)
{
      printf("%d\n", arg);
}
```
