/* File: 1-args.c */

#include <stdio.h>

/**
 * main -  program that prints the number of arguments passed into it
 * program should print a number, followed by a new line
 * @argc: argument count
 * @argv: the arguments which are unused in this
 *
 * Return: 0
 */
int main(int argc, char __attribute__ ((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
