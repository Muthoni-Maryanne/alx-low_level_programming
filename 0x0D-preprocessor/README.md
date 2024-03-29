# 0x0D. C - Preprocessor

## Resources

1. [Understanding C program Compilation Process](https://www.youtube.com/watch?v=VDslRumKvRA&t=35s)

![1](https://github.com/Muthoni-Maryanne/alx-low_level_programming/assets/107298263/f2d43e44-2dfc-4706-b602-686ef2258883) 

![2](https://github.com/Muthoni-Maryanne/alx-low_level_programming/assets/107298263/6c6b68cf-e61a-48d9-8978-ed9b0da1e393)

2. [Object-like Macros](https://gcc.gnu.org/onlinedocs/gcc-5.1.0/cpp/Object-like-Macros.html#Object-like-Macros)
```
#define BUFFER_SIZE 1024
#define NUMBERS 1, \
                2, \
                3
#define BUFSIZE 1020
#define TABLESIZE BUFSIZE
#undef BUFSIZE
#define BUFSIZE 37
```
3. [Self-Referential Macros](https://gcc.gnu.org/onlinedocs/gcc-5.1.0/cpp/Self-Referential-Macros.html#Self-Referential-Macros)
   
`#define foo (4 + foo)` expanded to (4 + foo) by referential rule. Here foo both a macro and variable.

`#define EPERM EPERM` create macro which expands to itself, one useful feature of self-refrence. Left alone by preprocessor when running text.

```
#define x (4 + y)
#define y (2 * x)
/**
 * expands to:
 * x    ==> (4 + y)
 *          ==> (4 + (2 * x))
 * 
 * y    ==> (2 * x)
 *         ==> (2 * (4 + y))
 */
```
Each macro is expanded when it appears in the definition of the other macro, but not when it indirectly appears in its own definition. 

4. [Macro Arguments](https://gcc.gnu.org/onlinedocs/gcc-5.1.0/cpp/Macro-Arguments.html#Macro-Arguments)
   
`#define min(X, Y)  ((X) < (Y) ? (X) : (Y))`
      
x = min(a, b);          ==>  x = ((a) < (b) ? (a) : (b));
      
y = min(1, 2);          ==>  y = ((1) < (2) ? (1) : (2));

z = min(a + 28, *p);    ==>  z = ((a + 28) < (*p) ? (a + 28) : (*p));

5. [Pre Processor Directives in C | Directories in C | C Programming Language](https://www.youtube.com/watch?v=X6HiYbY3Uak)

Directives: #define #undef #ifdef #ifndef #if #else #elif #endif #include #error #pragma

predefined macros: __DATE__, __TIME__, __FILE__, __LINE__, __STDC__

6. [The C Preprocessor](https://www.cprogramming.com/tutorial/cpreprocessor.html)

## Tasks
