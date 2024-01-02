/*File: 101-quote.c*/

#include <unistd.h>

/**
 *main -prints '"and that piece of art is useful" - Dora Korpar, 2015-10-19'
 *followed by a new line
 * do not use printf, puts, putchar
 *
 *Return: 1
 */
int main(void)
{
	char *bf = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, bf, 59);

	return (1);
}
