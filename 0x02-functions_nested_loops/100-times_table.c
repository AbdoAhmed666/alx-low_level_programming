#include "main.h"

/**
 * Write a function that prints the n times table greater than 0 and less than 15
 *
 * Return: nothing if (15 < n or n < 0)
*/

void print_times_table(int n)
{
	int i, j, r;
	if (n <= 15 && n >= 0)
	{	
		for (i = 0; i<n; i++)
		{
			_putchar('0');
			for(j = 1; j<n; J++)
			{
				_putchar(',');
				_putchar(' ');
				r = i * j;
			}
		}
	}
}


