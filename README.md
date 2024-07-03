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


## Requirements

**C**
- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A README.md file at the root of the repo, containing a description of the repository
- A README.md file, at the root of the folder of this project, containing a description of the project
- There should be no errors and no warnings during compilation
- You are not allowed to use system
- Your code should use the Betty style. It will be checked using [betty-style.pl](https://github.com/alx-tools/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/alx-tools/Betty/blob/master/betty-doc.pl)

**Shell Scripts**
- Allowed editors: vi, vim, emacs
- All your scripts will be tested on Ubuntu 20.04 LTS
- All your scripts should be exactly two lines long ($ wc -l file should print 2)
- All your files should end with a new line
- The first line of all your files should be exactly #!/bin/bash
  
## Projects

| No.  |Project       | Description    |
|------|--------------| ---------------|
|0.    | [0x00-hello_world](https://github.com/Muthoni-Maryanne/alx-low_level_programming/tree/master/0x00-hello_world) | This was an introduction to C. The concepts covered include: origins of C, Unix, Linux, data types, variables, formatted and unformatted I/O, putchar(), getchar(), printf(), scanf(), puts(), gcc compiler and the compilation process. |
|1.    |               |               |
|2.    |               |               |
|3.    |               |               |
|4.    |               |               |
|5.    |               |               |

