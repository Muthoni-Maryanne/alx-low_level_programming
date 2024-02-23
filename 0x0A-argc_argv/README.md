# 0x0A. C - argc, argv

This is a continuation of C that looks at arguments to main

# Resources

1. [Arguments to main](https://publications.gbdirect.co.uk//c_book/chapter10/arguments_to_main.html)
2. [argc and argv](http://crasseux.com/books/ctutorial/argc-and-argv.html)
3. [What does int argc, char* argv[] mean?](https://www.youtube.com/watch?v=aP1ijjeZc24)
4. [unused variable C](https://www.google.com/webhp?q=unused+variable+C)

# Summary
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
