#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print single numbers using putchar
 *
 * Return: always 0 (success)
*/

int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		/*convert digit to ASCII representation*/
		putchar(n + '0');
		n++;
	}
	putchar('\n');

	return (0);
}
