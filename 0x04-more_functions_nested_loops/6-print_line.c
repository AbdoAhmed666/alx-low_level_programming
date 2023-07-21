#include "main.h"
/**
 * Write a function that draws a straight line in the terminal
 *
 * Where n is the number of times the character _ should be printed
 *@n:parameter
 * If n is 0 or less, the function should only print \n
 *
 * Return: nothing
*/

void print_line(int n)
{
while (n-- > 0)
{
_putchar('_');
}
_putchar('\n');
}
