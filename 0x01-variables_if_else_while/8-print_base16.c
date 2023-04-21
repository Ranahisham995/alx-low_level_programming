#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all 16 numbers in lower case
 *
 * Return: always 0 (success)
*/

int main(void)
{
	int n = 48; /*decimal rep of 0*/

	while (n <= 102) /*decimal rep of f*/
	{
		putchar(n);

		/*after 9 we jump to 96;*/
		if (n == 57)
			n += 39;
		n++;
	}
	putchar('\n');

	return (0);
}
