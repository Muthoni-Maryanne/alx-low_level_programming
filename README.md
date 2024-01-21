# C
This is a repository for all C tasks and projects done at ALX Africa. 
## Prerequisites: Betty
Before beginning one has to install Betty linter to check the code and ensure it follows the Betty coding style, a derivative of the Linux coding style used at ALX Africa/Holberton School. The process is:

1. Go to the [Betty](https://github.com/alx-tools/Betty) repository

2. Clone the repo to your local machine

3. cd into the Betty directory

4. Install the linter with sudo ./install.sh

5. Emacs or vi a new file called betty, and copy the script below:


```#!/bin/bash

#Simply a wrapper script to keep you from having to use betty-style

#and betty-doc separately on every item.

#Originally by Tim Britton (@wintermanc3r), multiargument added by

#Larry Madeo (@hillmonkey)

BIN_PATH="/usr/local/bin"
BETTY_STYLE="betty-style"
BETTY_DOC="betty-doc"

if [ "$#" = "0" ]; then
    echo "No arguments passed."
    exit 1
fi

for argument in "$@" ; do
    echo -e "\n========== $argument =========="
    ${BIN_PATH}/${BETTY_STYLE} "$argument"
    ${BIN_PATH}/${BETTY_DOC} "$argument"
done
```
6. Once saved, exit file and change permissions to apply to all users with chmod a+x betty

7. Move the betty file into /bin/ directory or somewhere else in your $PATH with sudo mv betty /bin/

8. You can now type betty <filename> to run the Betty linter!

# Projects
## **Project 0: 0x00. C - Hello, World**

This was an introduction to C. The concepts covered include: origins of C, Unix, Linux, data types, variables, formatted and unformatted I/O, putchar(), getchar(), printf(), scanf(), puts(), gcc compiler and the compilation process.

Process of creating repository:

1. Create repo [alx-low_level_programming](https://github.com/Muthoni-Maryanne/alx-low_level_programming) in GitHub with README.md

2. Clone to local machine:

3. git clone https://{YOUR_PERSONAL_TOKEN}@github.com/{YOUR_USERNAME}/alx-low_level_programming.git

4. Create [0x00-hello_world](https://github.com/Muthoni-Maryanne/alx-low_level_programming/tree/master/0x00-hello_world) directory.

5. Create files in [0x00-hello_world](https://github.com/Muthoni-Maryanne/alx-low_level_programming/tree/master/0x00-hello_world) and input for each task and put information about each task in [README.md](https://github.com/Muthoni-Maryanne/alx-low_level_programming/blob/master/0x00-hello_world/README.md)

6. Git add, git commit and git push each file to remote repo in GitHub.

## **Project 1: 0x01. C - Variables, if, else, while**

This is a continuation of C. The concepts covered include: identifiers, keywords, integers, characters, reals, operators in C(arithmetic operators (+, -, *, /, %), assignment operators(=, +=, -=, *=, /=, %=, &=, ^=), bitwise operators(&, |, ^, <<, >>, ~), relational operators(>, <, ==, !=, >=, <=), logical/boolean operators(&&, ||, !), ternary operator(Condition? true_value: false_value), increment(++), decrement(--), special operators(&- address, *-pointer, sizeof()), conditional statements(if, if..else, if..else if..else), while loop and for loop.

Process:

1. mkdir [0x01-variables_if_else_while](https://github.com/Muthoni-Maryanne/alx-low_level_programming/tree/master/0x01-variables_if_else_while) directory in [alx-low_level_programming](https://github.com/Muthoni-Maryanne/alx-low_level_programming) repository.

2. Create files in [0x01-variables_if_else_while](https://github.com/Muthoni-Maryanne/alx-low_level_programming/tree/master/0x01-variables_if_else_while) for each task and put information about each task in the [README.md](https://github.com/Muthoni-Maryanne/alx-low_level_programming/blob/master/0x01-variables_if_else_while/README.md) for the project.

3. Git add, git commit and git push each file to the remote repo in GitHub.

## **Project 2: 0x02. C - Functions, nested loops**

This is a continuation of C. The concepts covered include: nested while loops, functions(prototype declarartion, arguments, calling functions, local/automatic variable, auto, static, return value e.g void, int etc.) and header files.

Process:

1. mkdir [0x02-functions_nested_loops](https://github.com/Muthoni-Maryanne/alx-low_level_programming/tree/master/0x02-functions_nested_loops) directory in [alx-low_level_programming](https://github.com/Muthoni-Maryanne/alx-low_level_programming) repository.

2. Create files in [0x02-functions_nested_loops](https://github.com/Muthoni-Maryanne/alx-low_level_programming/tree/master/0x02-functions_nested_loops) for each task and put information about each task in the [README.md](https://github.com/Muthoni-Maryanne/alx-low_level_programming/blob/master/0x02-functions_nested_loops/README.md) for the project.

3. Git add, git commit and git push each file to the remote repo in GitHub.

## **Project 3: 0x03. C - Debugging**

The concepts discussed in this include: what is debugging?, the process, techniques e.g tracing, interactive, activity, postmortem, remote, wolf fence algorithm etc., anti-debugging, and rubber duck debugging.

Process:

1. mkdir [0x03-debugging](https://github.com/Muthoni-Maryanne/alx-low_level_programming/tree/master/0x03-debugging) directory in [alx-low_level_programming](https://github.com/Muthoni-Maryanne/alx-low_level_programming) repository.

2. Create files in [0x03-debugging](https://github.com/Muthoni-Maryanne/alx-low_level_programming/tree/master/0x03-debugging) for each task and put information about each task in the [README.md](https://github.com/Muthoni-Maryanne/alx-low_level_programming/blob/master/0x03-debugging/README.md) for the project.

3. Git add, git commit and git push each file to the remote repo in GitHub.

## **Project 4: 0x04. C - More functions, more nested loops**

Continuation of functions tasks in project 2.

1. mkdir [0x04-more_functions_nested_loops](https://github.com/Muthoni-Maryanne/alx-low_level_programming/tree/master/0x04-more_functions_nested_loops) directory in [alx-low_level_programming](https://github.com/Muthoni-Maryanne/alx-low_level_programming) repository.

2. Create files in  [0x04-more_functions_nested_loops](https://github.com/Muthoni-Maryanne/alx-low_level_programming/tree/master/0x04-more_functions_nested_loops) for each task and put information about each task in the [README.md](https://github.com/Muthoni-Maryanne/alx-low_level_programming/blob/master/0x04-more_functions_nested_loops/README.md) for the project.

3. Git add, git commit and git push each file to the remote repo in GitHub.
