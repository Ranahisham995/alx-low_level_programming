#include "main.h"
/**
 * print_line - function that draws a straight line in the terminal
 *
 * @n: the number of times the _ character
 * should be printed
*/

void print_line(int n)
{
	int nchr;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (nchr = 1; nchr <= n; nchr++)
			_putchar('_');
		_putchar('\n');
	}
}
