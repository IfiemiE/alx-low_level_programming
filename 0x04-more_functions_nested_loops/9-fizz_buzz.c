#include <stdio.h>
#include "main.h"
/**
* main - replaces multples of 3 with fizz,
* multiples of 5 with buzz, and
* multiples of both 3 and 5 with fizzbuzz
* Return: 0 to terminate program
*/

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (((i % 3) == 0) && ((i % 5) != 0))
		{
			printf("Fizz");
		}
		else if (((i % 3) != 0) && ((i % 5) == 0))
		{
			printf("Buzz");
		}
		else if (((i % 3) == 0) && ((i % 5) == 0))
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", i);
		}
		if ((i >= 1) && (i < 100))
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
