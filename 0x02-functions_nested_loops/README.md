# **0x02. C - Functions, nested loops**

This is a continuation of C. The concepts covered include: nested while loops, functions(prototype declaration, arguments, calling functions, local/automatic variable, auto, static, return value e.g. void, int, etc.), and header files.

## Resources

1. [Nested while loops](https://www.youtube.com/watch?v=Z3iGeQ1gIss)

syntax:
```
initialization;

while (condition_1)
{
  while (condition_2)
  {
    inner loop statement block;
    increment/decrement;
  }
  outer loop statement block;
  increment/decrement;
}
```

2. [C- Functions](https://www.tutorialspoint.com/cprogramming/c_functions.htm)

Function definition syntax: 
```
return_type function_name( parameter list )
{
   body of the function
}
```
Function declaration syntax:

```
return_type function_name( parameter list );
```
Example of function prototypes:

```
int max(int num1, int num2);

/*  Parameter names not required, only type required */
int max(int, int);
```

Example of max() function to get maximum value of 2 ints:

```
#include <stdio.h>
 
/* function declaration */
int max(int num1, int num2);
 
int main () {

   /* local variable definition */
   int a = 100;
   int b = 200;
   int ret;
 
   /* calling a function to get max value */
   ret = max(a, b);
 
   printf( "Max value is : %d\n", ret );
 
   return 0;
}
 
/* function returning the max between two numbers */
int max(int num1, int num2) {

   /* local variable declaration */
   int result;
 
   if (num1 > num2)
      result = num1;
   else
      result = num2;
 
   return result; 
}
```

3. [Learning to Program in C (Part 06)](https://www.youtube.com/watch?v=qMlnFwYdqIw)

4. [What is the purpose of a function prototype?](https://www.geeksforgeeks.org/what-is-the-purpose-of-a-function-prototype/)

5. [C - Header Files](https://www.tutorialspoint.com/cprogramming/c_header_files.htm)

Include syntax:

a. User and the system header files: 

```#include <file>```

b. Own program header files: 

```#include "file"```

Only once headers to prevent error if a header file happens to be included twice:

```
#ifndef HEADER_FILE
#define HEADER_FILE

the entire header file file e.g macros, function prototypes etc.

#endif
```

## Tasks

**NOTE:** For the tasks [main.h](https://github.com/Muthoni-Maryanne/alx-low_level_programming/blob/master/0x02-functions_nested_loops/main.h) was used for the header files and [_putchar](https://github.com/Muthoni-Maryanne/alx-low_level_programming/blob/master/0x02-functions_nested_loops/_putchar.c) was a user defined function in place of putchar.


**Task 0:**  [0-putchar.c](https://github.com/Muthoni-Maryanne/alx-low_level_programming/blob/master/0x02-functions_nested_loops/0-putchar.c)- program that prints _putchar, followed by a new line. It returns 0.

![0](https://github.com/Muthoni-Maryanne/alx-low_level_programming/assets/107298263/9ad67dbb-a4c3-423e-810e-62ef9f52e40e)

**Task 1:**  [1-alphabet.c](https://github.com/Muthoni-Maryanne/alx-low_level_programming/blob/master/0x02-functions_nested_loops/1-alphabet.c)- a function that prints the alphabet, in lowercase, followed by a new line. Can only use _putchar twice. [1-main.c](https://github.com/Muthoni-Maryanne/alx-low_level_programming/blob/master/0x02-functions_nested_loops/1-main.c) used to test the code.
Prototype: void print_alphabet(void);

![1](https://github.com/Muthoni-Maryanne/alx-low_level_programming/assets/107298263/6b1364e2-d802-4e99-802b-c34046ff9c39)

**Task 2:**  [2-print_alphabet_x10.c](https://github.com/Muthoni-Maryanne/alx-low_level_programming/blob/master/0x02-functions_nested_loops/2-print_alphabet_x10.c)- a function that prints 10 times the alphabet, in lowercase, followed by a new line. Only use putchar and twice. [2-main.c](https://github.com/Muthoni-Maryanne/alx-low_level_programming/blob/master/0x02-functions_nested_loops/2-main.c) used to test the code.
Prototype: void print_alphabet_x10(void);

![2](https://github.com/Muthoni-Maryanne/alx-low_level_programming/assets/107298263/c05e6b70-cc1c-45dd-a687-5e38a5ee4f94)

**Task 3:**  [3-islower.c](https://github.com/Muthoni-Maryanne/alx-low_level_programming/blob/master/0x02-functions_nested_loops/3-islower.c)-  function that checks for lowercase character. Returns 1 if c is lowercase, 0 otherwise. [3-main.c](https://github.com/Muthoni-Maryanne/alx-low_level_programming/blob/master/0x02-functions_nested_loops/3-main.c) used to test the code.
Prototype: int _islower(int c);

![3](https://github.com/Muthoni-Maryanne/alx-low_level_programming/assets/107298263/b8ff8b85-2daf-4e68-8644-e6a51308e54e)

**Task 4:**  [4-isalpha.c](https://github.com/Muthoni-Maryanne/alx-low_level_programming/blob/master/0x02-functions_nested_loops/4-isalpha.c)-  function that checks for alphabetic character. Returns 1 if c is a letter, lowercase or uppercase. Returns 0 otherwise
[4-main.c](https://github.com/Muthoni-Maryanne/alx-low_level_programming/blob/master/0x02-functions_nested_loops/4-main.c) used to test the code.
Prototype: int _isalpha(int c);

![4](https://github.com/Muthoni-Maryanne/alx-low_level_programming/assets/107298263/dbbbde41-1523-4217-969c-df924eb3d282)

**Task 5:**  [5-sign.c](https://github.com/Muthoni-Maryanne/alx-low_level_programming/blob/master/0x02-functions_nested_loops/5-sign.c)- function that prints the sign of a number.Returns 1 and prints + if n is greater than zero. Returns 0 and prints 0 if n is zero. Returns -1 and prints - if n is less than zero. [5-main.c](https://github.com/Muthoni-Maryanne/alx-low_level_programming/blob/master/0x02-functions_nested_loops/5-main.c) used to test the code. Prototype: int print_sign(int n);

![5](https://github.com/Muthoni-Maryanne/alx-low_level_programming/assets/107298263/f7bca79f-f6c9-4c49-b675-e7242e128dbc)


**Task 6:**  [6-abs.c](https://github.com/Muthoni-Maryanne/alx-low_level_programming/blob/master/0x02-functions_nested_loops/6-abs.c)- function that computes the absolute value of an integer. FYI: The standard library provides a similar function: abs. Run man abs to learn more. [6-main.c](https://github.com/Muthoni-Maryanne/alx-low_level_programming/blob/master/0x02-functions_nested_loops/6-main.c) used to test the code.
Prototype: int _abs(int);

![6](https://github.com/Muthoni-Maryanne/alx-low_level_programming/assets/107298263/dc295bb6-c3d8-46f5-9894-afcc40596ebb)


**Task 7:** []()- function that prints the last digit of a number. Returns the value of the last digit. []() used to test the code.
Prototype: int print_last_digit(int);

![7](https://github.com/Muthoni-Maryanne/alx-low_level_programming/assets/107298263/55951876-cb2c-4ab5-a941-d623b2b3b68d)


**Task 8:** [8-24_hours.c](https://github.com/Muthoni-Maryanne/alx-low_level_programming/blob/master/0x02-functions_nested_loops/8-24_hours.c)- function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59. [8-main.c](https://github.com/Muthoni-Maryanne/alx-low_level_programming/blob/master/0x02-functions_nested_loops/8-main.c) used to test the code.
Prototype: void jack_bauer(void);

![8](https://github.com/Muthoni-Maryanne/alx-low_level_programming/assets/107298263/bb75ac80-9ddf-425a-a73b-f71ae5a91bc9)


**Task 9:** []()-  function that prints the 9 times table, starting with 0. []() used to test the code.
Prototype: void times_table(void); 

![9](https://github.com/Muthoni-Maryanne/alx-low_level_programming/assets/107298263/a87e8ed1-47c6-4cca-a3bf-b07d5bdd7189)


**Task 10:** []()- function that adds two integers and returns the result. []() used to test the code.
Prototype: int add(int, int);

![10](https://github.com/Muthoni-Maryanne/alx-low_level_programming/assets/107298263/7381b857-9d8c-433a-9212-1f235fb812f7)

**Task 11:** []()- function that prints all natural numbers from n to 98, followed by a new line. Numbers must be separated by a comma, followed by a space. Numbers should be printed in order. The first printed number should be the number passed to your function. The last printed number should be 98. You are allowed to use the standard library []() used to test the code.
Prototype: void print_to_98(int n);

![11](https://github.com/Muthoni-Maryanne/alx-low_level_programming/assets/107298263/e9caeae1-5940-465d-9bdb-7245b25e6d01)

**Task 12:** []()- function that prints the n times table, starting with 0. If n is greater than 15 or less than 0 the function should not print anything. []() used to test the code. 
Prototype: void print_times_table(int n);

![12](https://github.com/Muthoni-Maryanne/alx-low_level_programming/assets/107298263/24eddee4-3194-4f53-9e02-5751542d6d15)

