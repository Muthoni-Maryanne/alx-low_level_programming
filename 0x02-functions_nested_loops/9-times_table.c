/* File: 9-times_table.c */

#include "main.h"
#include <stdio.h>

/**
 * times_table - function that prints the 9 times table, starting with 0
 *
 * Return: 0
 */
void times_table(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		int j;

		for (j = 0; j <= 9; j++)
		{
			int tt = i * j;
			printf("%d ,", tt);

			if (j == 9)
			{
				printf("%d", tt);
			}
		}
		printf("\n");
	}
}
