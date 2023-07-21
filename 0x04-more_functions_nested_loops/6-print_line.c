#include "main.h"
/**
 * Write a function that draws a straight line in the terminal
 *
 * Where n is the number of times the character _ should be printed
 *
 * If n is 0 or less, the function should only print \n
*/

void print_line(int n);
{
	if (n <= 0)
	{
		_putchar("\n");
	}
	else
	{
		for (, n > 0, n--)
		{
			_putchar("-");
		}
		Putchar("\n");
	}
}
