/* File: 4-add.c */

#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that adds positive numbers
 * @argc: argument count
 * @argv: the arguments
 *
 * Print the result, followed by a new line
 * If no number is passed to the program, print 0
 * If one of the number contains symbols that are not digits,
 * print Error followed by a new line, and return 1
 *
 * Return:0
 */
int main(int argc, char *argv[])
{
	int i, index, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (index = 0; argv[i][index]; index++)
		{
			if (argv[i][index] < '0' || argv[i][index] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
