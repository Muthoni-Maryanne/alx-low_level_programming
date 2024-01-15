/* File: 0-whatsmyname.c */

#include <stdio.h>

/**
 * main - program that prints its name
 * @argc: argument count which is unuseed in this
 * @argv: the arguments
 *
 * If you rename the program, it will print the new name
 * without having to compile it again
 * should not remove the path before the name of the program
 *
 * Return: 0
 */
int main(int __attribute__ ((unused)) argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
