#include "main.h"

/**
 * times_table - function that prints the 9 times table, starting with 0
 *
 * Example table
 * 0, 0, 0, 0, ..
 * 0, 1, 2, 3, ..
 * 0, 2, 4, 6, ..
 *
*/
void times_table(void)
{
	int n, mult, prod;

	for (n = 0; n <= 9; n++)
	{
		_putchar(48);
		for (mult = 1; mult <= 9; mult++)
		{
			_putchar(',');
			_putchar(' ');

			prod = n * mult;

			/**
			 * put space if product is single number
			 * place first digit if two numbers
			*/
			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + 48);

			_putchar((prod % 10) + 48);
		}
		_putchar('\n');
	}
}
