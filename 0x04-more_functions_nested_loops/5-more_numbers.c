#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: Always 0 (success)
*/

void more_numbers(void)
{
	int n, row, count;

	for (row = 1; row <= 10; row++)
	{
		for (count = 0; count <= 14; count++)
		{
			n = count;
			if (count > 9)
		{
			_putchar(1 + 48);
			n = count % 10;
		}
		_putchar(n + 48);
	}
	_putchar('\n');
}
}
