# 0x18. C - Dynamic libraries
Continuation of C which looks at dynamically linked libraries.

## Resources
1. [What is difference between Dynamic and Static library(Static and Dynamic linking)](https://www.youtube.com/watch?v=eW5he5uFBNM)
2. [Creating a dynamic library in C](https://cylab.be/blog/234/creating-a-dynamic-library-in-c)
3. [Chapter 17. Creating libraries with GCC](https://access.redhat.com/documentation/en-us/red_hat_enterprise_linux/7/html/developer_guide/creating-libraries-gcc)
4. [How to create a Dynamic Library in C](https://medium.com/@kenneth.ca95/how-to-create-a-dynamic-library-in-c-baa473148d00)
5. [Creating and Using Dynamic Libraries in C language](https://medium.com/@4318_26766/creating-and-using-dynamic-libraries-in-c-language-912b078b7c52#:~:text=To%20create%20a%20Dynamic%20Library%20in%20Linux%20we%20are%20using,make%20the%20code%20position%20independent.)
   
## Summary
Dynamic libraries: A library is a collection of object files grouped into one unit to ease programming work distribution or to structure software development into units. You can create two kinds of C libraries: static and dynamic. Dynamic are libraries where the address of the library is referenced in the executable instead of having a copy of the code in the executable thus reducing memory and allowing access from anywhere.

**Process**
1. Creating a dynamic library.
a. compile code of source files to object code but do not link so use -c then -fPICflag is to make the code position independent, generated machine code is not dependent on being located at a specific address in order to work.
```gcc -c -fPIC *.c```
b. create shared library, -o is to specify the name one wants for the shared library.
```gcc -shared -o libdynamic.so *.o```
c. Check if it has been created.
```nm -D libdynamic.so```

2. Telling GCC where to find the shared library
```
$ ldd len 
    linux-vdso.so.1 =>  (0x00007fff5d1d2000)
    libdynamic.so => not found
    libc.so.6 => /lib/x86_64-linux-gnu/libc.so.6 (0x00007f74c6bb9000)
    /lib64/ld-linux-x86-64.so.2 (0x0000556be5b82000)
```
Here we notice that the library is not found. For this to work, you have to add the location of your library files into the environmental variable to know where to find the functions.
```
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
```
After that the library is found in the PATH.
```
$ ldd len
    linux-vdso.so.1 =>  (0x00007fff41ae9000)
    libdynamic.so => ./libdynamic.so (0x00007fd4bf2d9000)
    libc.so.6 => /lib/x86_64-linux-gnu/libc.so.6 (0x00007fd4beef6000)
    /lib64/ld-linux-x86-64.so.2 (0x0000557566402000)
```

3. Linking the created library with source files that use functions in the library.
```
// Alternative 1
gcc -L . 0-main.c -l all -o example
```

```
// Alternative 2
gcc -c 0-main.c
gcc -o example 0-main.o -L./ -lall
```

## Tasks
