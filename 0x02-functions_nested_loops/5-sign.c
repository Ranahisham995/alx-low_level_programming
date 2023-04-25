#include "main.h"

/**
 * print_sign - prints + if n is greater than zero
 * prints 0 and prints 0 if n is zero
 * prints -1 and prints - if n is less than zero
 *
 * @n: takes integer type input for function
 *
 * Return: return 1 if +, 0 if 0 and -1 if -
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
