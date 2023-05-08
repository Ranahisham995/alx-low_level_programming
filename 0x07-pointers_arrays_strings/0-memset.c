#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: pointer to put constant
 * @b: constant
 * @n: max byte to use
 * Return: pointer s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int its;

	for (its = 0; n > 0; its++, n--)
	{
		s[its] = b;
	}

	return (s);
}
