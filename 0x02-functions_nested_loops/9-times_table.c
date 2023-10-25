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

			if (j == 9 && i <= 1)
			{
				printf(" %d", tt);
			}
			else if (j == 9 && i >= 2)
			{
				printf("%d", tt);
			}
			else
			{
				if (tt >= 10)
				{
					if ((i == 2 && j == 2) && (i == 3 && j == 4) 
							&& (i == 4 && j == 3) 
							&& (i >= 5 && j >= 2))
					{
						printf("%d,  ", tt);
					}
					else
					{
					printf("%d, ", tt);
					}
				}
				else if (tt < 10 && tt >= 0)
				{
					printf(" %d, ",tt);
				}
			}
		}
		printf("\n");
	}
}
