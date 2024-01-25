# 0x0F. C - Function pointers

This is a continuation of C that looks at pointers to functions and array of pointers to functions.

## Resources

1.  [Pointers to Functions](https://publications.gbdirect.co.uk//c_book/chapter5/function_pointers.html)
   
```
/* pointer to function returning int */
int (*func)(int a, float b);

/* function returning pointer to int */
int *func(int a, float b);
```
Example of pointer to function:
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

      /* calling function using a pointer instead of directly with func(1)*/
      (*fp)(1);   /* first method */
      fp(2);      /* second method */

      exit(EXIT_SUCCESS);
}

void func(int arg)
{
      printf("%d\n", arg);
}
```
Example of an array of pointers to functions:
```
void (*fparr[])(int, float) = {
                              /* initializers */
                      };
/* then call one */

fparr[5](1, 3.4);
```

2. [Function Pointers in C / C++](https://www.youtube.com/watch?v=ynYtgGUNelE)

Example of pointer to function:

```
#include <stdio.h>

void PrintHello(char *name)
{
	printf("Hello %s\n", name);
}

int main() 
{
void (*ptr)(char *name);
ptr = &PrintHello;
(*ptr)("Maryanne");

return (0);
}
```

3. [Function pointers and callbacks](https://www.youtube.com/watch?v=sxTFSDAZM8s)

4. [Everything you need to know about pointers in C](https://boredzo.org/pointers/)

5. [Function pointer in C](https://www.geeksforgeeks.org/function-pointer-in-c/)

A function pointer points to code, not data.

Example of array of function pointers:

```
#include <stdio.h> 
void add(int a, int b) 
{ 
	printf("Addition is %d\n", a+b); 
} 
void subtract(int a, int b) 
{ 
	printf("Subtraction is %d\n", a-b); 
} 
void multiply(int a, int b) 
{ 
	printf("Multiplication is %d\n", a*b); 
} 

int main() 
{ 
	// fun_ptr_arr is an array of function pointers 
	void (*fun_ptr_arr[])(int, int) = {add, subtract, multiply}; 
	unsigned int ch, a = 15, b = 10; 

	printf("Enter Choice: 0 for add, 1 for subtract and 2 "
			"for multiply\n"); 
	scanf("%d", &ch); 

	if (ch > 2) return 0; 

	(*fun_ptr_arr[ch])(a, b); 

	return 0; 
} 
```
