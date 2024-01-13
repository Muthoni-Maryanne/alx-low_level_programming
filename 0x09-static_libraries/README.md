**0x09. C - Static libraries**

This is a continuation of C. The concepts learned were: static and dynamic/shared libraries.

Resources used to learn were:

1).[Google](https://www.google.com/search?q=C+static+libraries&gws_rd=ssl#q=C+static+libraries)

-. [All you need to know about C Static libraries](https://dev.to/iamkhalil42/all-you-need-to-know-about-c-static-libraries-1o0b)

-. [C Static Library](https://www.linkedin.com/pulse/c-static-library-nicolas-ribeiro/)

2).[Building And Using Static And Shared "C" Libraries](https://docencia.ac.upc.edu/FIB/USO/Bibliografia/unix-c-libraries.html)

3).[What is difference between Dynamic and Static library(Static and Dynamic linking)](https://www.youtube.com/watch?v=eW5he5uFBNM)

The tasks used to reinforce these concepts are:

**Task 0:**  []()

Create the static library libmy.a containing all the functions listed below:
int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);

**Task 1:** []()
Create a script called create_static_lib.sh that creates a static library called liball.a from all the .c files that are in the current directory.
int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);

