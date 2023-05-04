#include "main.h"

/**
 * main - print numbers 1 - 100 followed by a new line
 * numbers that are multiples by 3 print Fizz
 * numbers that are multiples by 5 print Buzz
 * numbers that are multiples by 3 and 5 print FizzBuzz
 * each number and word to be separated by space
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 && !(n % 5 == 0))
			printf("Fizz");
else if (n % 5 == 0 && !(n % 3 == 0))
printf("Buzz");
else if (n % 3 == 0 && n % 5 == 0)
printf("FizzBuzz");
else
printf("%d", n);
if (n != 100)
printf(" ");
else
printf("\n");
}

return (0);
}