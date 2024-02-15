# **Project 1: 0x00. C - Hello, World**

This was an introduction to C. The concepts covered include: origins of C, Unix, Linux, data types, variables, formatted and unformatted I/O, putchar(), getchar(), printf(), scanf(), puts(), gcc compiler and the compilation process. 

## Resources 

1. [Dennis Ritchie](https://en.wikipedia.org/wiki/Dennis_Ritchie)

2. ["C" Programming Language: Brian Kernighan - Computerphile](https://www.youtube.com/watch?v=de2Hsvxaf8M)

3. [Why C programming is awesome](https://www.youtube.com/watch?v=smGalmxPVYc)

4. [Learning to Program in C (Part 01)](https://www.youtube.com/watch?v=rk2fK2IIiiQ)

5. [Learning to Program in C (Part 01)](https://www.youtube.com/watch?v=FwpP_MsZWnU)

6. [Understanding C program Compilation Process](https://www.youtube.com/watch?v=VDslRumKvRA)

7. [Betty coding style](https://github.com/alx-tools/Betty/wiki)

8. [Hash-bang under the hood](https://twitter.com/unix_byte/status/1024147947393495040?s=21)

9. [Linus Torvalds on C++](https://harmful.cat-v.org/software/c++/linus)

10. [Jenny C tutorial](https://www.youtube.com/watch?v=EjavYOFoJJ0&list=PLdo5W4Nhv31a8UcMN9-35ghv8qyFWD9_S)

11. man pages: gcc, printf, puts and putchar.

## Summary

1. Structre of a C program
* Documentation section.
* Link section.
* Definition section.
* Global declaration section.
* Main function section.
* Sub program section.

Example:
```
/* File: add.c */

#include <stdio.h>                /* Link section */
int add(int a, int b);            /* Global function declarartion */
#define MAX 100                   /* Macro definition */
int res;                          /* Global variable declarartion */

/**
 * main - function to test add()
 *
 * Return: 0
 */
int main(void)
{
  int i, j;                     /* Each variable allocated 4 bytes*/

  i = 2;                        /* Value of i set to 2*/
  j = 4;                        /* Value of j set to 4*/
  res = add(i, j);              /* Function add() called */
  printf("%d\n", res);          /* call printf to print value of res */
  return (0);                   /* return 0 to end the program */
}

/**
 * add - function to add two integers
 *
 * Return: sum
 */
int add(int a, int b)
{
  /* value i copied to a, value j copied to b*/
  sum = a + b;                 /* compute a + b */
  return (sum);                /* return sum which takes back to main */
}
```

2. Formatted and unformatted input and output
   
```int printf(const char *format, ...);```

```int scanf(const char *format, ...);```

```int putchar(int ch);```

```int getchar(void);```

3. Compilation process

![1](https://github.com/Muthoni-Maryanne/alx-low_level_programming/assets/107298263/f469ed11-9d41-4cfb-9d08-0fcc49b8bb2c)

## Tasks

**Task 0:** [0-preprocessor](https://github.com/Muthoni-Maryanne/alx-low_level_programming/blob/master/0x00-hello_world/0-preprocessor)- Write a script that runs a C file through the preprocessor and save the result into another file. The C file name will be saved in the variable $CFILE. The output should be saved in the file c.
![0](https://github.com/Muthoni-Maryanne/alx-low_level_programming/assets/107298263/1e26bee4-bd17-4ad5-9489-6d4b5aa368e7)

**Task 1:** [1-compiler](https://github.com/Muthoni-Maryanne/alx-low_level_programming/blob/master/0x00-hello_world/1-compiler)-  Write a script that compiles a C file but does not link. The C file name will be saved in the variable $CFILE. The output file should be named the same as the C file, but with the extension .o instead of .c.
Example: if the C file is main.c, the output file should be main.o
![1](https://github.com/Muthoni-Maryanne/alx-low_level_programming/assets/107298263/76935ac9-0e4e-443a-8e74-cfdd04345e94)

**Task 2:** [2-assembler](https://github.com/Muthoni-Maryanne/alx-low_level_programming/blob/master/0x00-hello_world/2-assembler)- Write a script that generates the assembly code of a C code and save it in an output file. The C file name will be saved in the variable $CFILE. The output file should be named the same as the C file, but with the extension .s instead of .c.
Example: if the C file is main.c, the output file should be main.s

![2](https://github.com/Muthoni-Maryanne/alx-low_level_programming/assets/107298263/d2fe52e9-9b4c-47d5-ad46-433c23ae0311)

**Task 3:** [3-name](https://github.com/Muthoni-Maryanne/alx-low_level_programming/blob/master/0x00-hello_world/3-name)- Write a script that compiles a C file and creates an executable named cisfun. The C file name will be saved in the variable $CFILE.

![3](https://github.com/Muthoni-Maryanne/alx-low_level_programming/assets/107298263/3fc4ffff-037b-401e-ac18-889a263710a8)

**Task 4:** []()- C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line. Use the function puts. You are not allowed to use printf. Your program should end with the value 0.
![4](https://github.com/Muthoni-Maryanne/alx-low_level_programming/assets/107298263/5463bd49-ae7d-4a8b-8bcf-7656ef94abd9)

**Task 5:** [5-printf.c](https://github.com/Muthoni-Maryanne/alx-low_level_programming/blob/master/0x00-hello_world/5-printf.c)- Write a C program that prints exactly with proper grammar, but the outcome is a piece of art,, followed by a new line.
Use the function printf
You are not allowed to use the function puts
Your program should return 0
Your program should compile without warning when using the -Wall gcc option

![5](https://github.com/Muthoni-Maryanne/alx-low_level_programming/assets/107298263/b8e3b51a-7bc0-4a5e-8144-e8ac4a8ec520)

**Task 6:** [6-size.c](https://github.com/Muthoni-Maryanne/alx-low_level_programming/blob/master/0x00-hello_world/6-size.c)- Write a C program that prints the size of various types on the computer it is compiled and run on. You should produce the exact same output as in the example. Warnings are allowed. Your program should return 0. You might have to install the package libc6-dev-i386 on your Linux to test the -m32 gcc option.

![6](https://github.com/Muthoni-Maryanne/alx-low_level_programming/assets/107298263/22a61823-ceef-4620-8efa-449e236d7f90)

**Task 7:** [100-intel](https://github.com/Muthoni-Maryanne/alx-low_level_programming/blob/master/0x00-hello_world/100-intel)- Write a script that generates the assembly code (Intel syntax) of a C code and save it in an output file. The C file name will be saved in the variable $CFILE. The output file should be named the same as the C file, but with the extension .s instead of .c. Example: if the C file is main.c, the output file should be main.s

![7](https://github.com/Muthoni-Maryanne/alx-low_level_programming/assets/107298263/15624f29-9094-4804-985b-edebb44261cf)

**Task 8:** [101-quote.c](https://github.com/Muthoni-Maryanne/alx-low_level_programming/blob/master/0x00-hello_world/[101-quote.c](https://github.com/Muthoni-Maryanne/alx-low_level_programming/blob/master/0x00-hello_world/101-quote.c))- Write a C program that prints exactly and that piece of art is useful" - Dora Korpar, 2015-10-19, followed by a new line, to the standard error. You are not allowed to use any functions listed in the NAME section of the man (3) printf or man (3) puts
Your program should return 1. Your program should compile without any warnings when using the -Wall gcc option.

![8](https://github.com/Muthoni-Maryanne/alx-low_level_programming/assets/107298263/65c1f323-54f6-4159-8308-155ccfcb379b)
