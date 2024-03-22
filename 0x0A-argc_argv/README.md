# 0x0A. C - argc, argv

This is a continuation of C that looks at arguments passed to main. 

## Resources

1. [Arguments to main](https://publications.gbdirect.co.uk//c_book/chapter10/arguments_to_main.html)
2. [argc and argv](http://crasseux.com/books/ctutorial/argc-and-argv.html)
3. [What does int argc, char* argv[] mean?](https://www.youtube.com/watch?v=aP1ijjeZc24)
4. [unused variable C](https://www.google.com/webhp?q=unused+variable+C)

## Summary
Up until now, the skeletons we have used for our C programs have looked something like this:
```
#include <stdio.h>
int main()
{

  return 0;
}
```
From now on, our examples may look a bit more like this:
```
#include <stdio.h>
int main (int argc, char *argv[])
{

  return 0;
}
```
As you can see, main now has arguments.  C functions wouldn't be very useful if you couldn't ever pass arguments to them -- adding the ability to pass arguments to programs makes them that much more useful The name of the variable argc stands for "argument count"; argc contains the number of arguments passed to the program. The name of the variable argv stands for "argument vector". A vector is a one-dimensional array, and argv is a one-dimensional array of strings. Each string is one of the arguments that was passed to the program. 

argv can be represented in two ways:
a. char *argv[]: This declaration represents an array of pointers to characters, each pointer points to a string. Each element of the array (argv[0], argv[1], etc.) points to a null-terminated string, where argv[0] typically holds the name of the program itself. The last element of argv is typically NULL, indicating the end of the argument list.
```
char *argv[] = {"program_name", "arg1", "arg2", NULL};

+-------------------+
| argv[0] (ptr)     | ---> "program_name\0"
+-------------------+
| argv[1] (ptr)     | ---> "arg1\0"
+-------------------+
| argv[2] (ptr)     | ---> "arg2\0"
+-------------------+
| argv[3] (ptr)     | ---> NULL
+-------------------+
```
b. char **argv: This declaration represents a pointer to array of pointers to characters. This means it points to the first element of an array of pointers, where each pointer points to a string (a command-line argument).argv is a pointer that points to the first element of the array of pointers. So, argv itself points to argv[0], which is similar to the first element of the char *argv[] array.
```
char **argv;

+------------+
| argv (ptr) | ----> +-------------------+
+------------+       | argv[0] (ptr)     | ---> "program_name\0"
                     +-------------------+
                     | argv[1] (ptr)     | ---> "arg1\0"
                     +-------------------+
                     | argv[2] (ptr)     | ---> "arg2\0"
                     +-------------------+
                     | argv[3] (ptr)     | ---> NULL
                     +-------------------+
```
Example of a function that sums up arguments passed to CLI:
```
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
  int count, sum = 0;

  printf ("This program was called with \"%s\".\n",argv[0]);

  if (argc > 1)
  {
      for (count = 1; count < argc; count++)
      {
        printf("argv[%d] = %s\n", count, argv[count]);
        sum += atoi(argv[count]);
      }
  }
  else
  {
      printf("The command had no other arguments.\n");
  }

  printf("Sum: %d\n", sum);
  return 0;
}
```

## Tasks

**Task 0:** [0-whatsmyname.c](https://github.com/Muthoni-Maryanne/alx-low_level_programming/blob/master/0x0A-argc_argv/0-whatsmyname.c)- Write a program that prints its name, followed by a new line.
* If you rename the program, it will print the new name, without having to compile it again.
* You should not remove the path before the name of the program

![0](https://github.com/Muthoni-Maryanne/alx-low_level_programming/assets/107298263/289ab6d5-da6e-4aea-8138-6f33683e0452)

Alternative way to answer if can only use _putchar() or putchar:
```
int main(int __attribute__((unused)) argc, char **argv)
{
        int i;
        char * s;
        s = argv[0];

        for (i = 0; s[i] != '\0'; i++)
        {
                putchar(s[i]);
        }
        return (0);
}
```
**Task 1:** [1-args.c](https://github.com/Muthoni-Maryanne/alx-low_level_programming/blob/master/0x0A-argc_argv/1-args.c)- Write a program that prints the number of arguments passed into it.
* Your program should print a number, followed by a new line

![1](https://github.com/Muthoni-Maryanne/alx-low_level_programming/assets/107298263/53efe81a-30cf-4351-abef-3f9cfca29dc2)

**Task 2:** [2-args.c](https://github.com/Muthoni-Maryanne/alx-low_level_programming/blob/master/0x0A-argc_argv/2-args.c)- Write a program that prints all arguments it receives.
* All arguments should be printed, including the first one
* Only print one argument per line, ending with a new line

![2](https://github.com/Muthoni-Maryanne/alx-low_level_programming/assets/107298263/30397cab-bd50-4ae6-96ec-415edaa6682c)

**Task 3:** [3-mul.c](https://github.com/Muthoni-Maryanne/alx-low_level_programming/blob/master/0x0A-argc_argv/3-mul.c)- Write a program that multiplies two numbers.
* Your program should print the result of the multiplication, followed by a new line
* You can assume that the two numbers and result of the multiplication can be stored in an integer
* If the program does not receive two arguments, your program should print Error, followed by a new line, and return 1
  
![3](https://github.com/Muthoni-Maryanne/alx-low_level_programming/assets/107298263/514f95b5-9787-4dcc-8d32-4a4ef8b40a7d)

