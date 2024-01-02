/*File: 4-puts.c*/

#include <stdio.h>

/**
 *main -prints "Programming is like building a multilingual puzzle"
 *followed by a new line
 *use puts, not printf
 *
 *Return: 0
 */
int main(void)
{
	char *s = "Programming is like building a multilingual puzzle";

	putchar('"');
	puts(s);
	return (0);
}
