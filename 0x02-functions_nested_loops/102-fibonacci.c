#include <stdio.h>
/**
 * main - displays Fibonacci numbers
 *
 * Return: 0 for successful run
 */
int main(void)
{
	long int f1 = 1;
	long int f2 = 2;
	long int F;
	int i;

	for (i = 1; i <= 50; i++)
	{
		if (i == 1)
		{
			F = f1;
		}
		else if (i == 2)
		{
			F = f2;
		}
		else if (i == 3)
		{
			F = f1 + f2;
		}
		else
		{
			f1 = f2;
			f2 = F;
			F = f1 + f2;
		}

		if (i == 1)
		{
			printf("%lu", F);
		}
		else
		{
			printf(", %lu", F);
		}
	}
	printf("\n");

	return (0);
}
