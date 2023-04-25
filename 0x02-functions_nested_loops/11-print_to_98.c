#include "main.h"

/**
 * print_to_98 -  prints all natural numbers from n to 98
 * separated by a comma, followed by a space
 * numbers should be printed in order
 *
 * @n: input for function
*/

void print_to_98(int n)
{
	int count;

if (n > 98)
for (count = n; count > 98; count--)
printf("%d, ", count);
else
for (count = n; count < 98; count++)
printf("%d, ", count);
printf("98\n");
}
