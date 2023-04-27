#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9
 * do not print 2 and 4
 *
 * Return: Always 0 (success)
*/

void print_most_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		if (n == 2 || n == 4)
			continue;
		_putchar(n + 48);
	}
	_putchar('\n');
}
