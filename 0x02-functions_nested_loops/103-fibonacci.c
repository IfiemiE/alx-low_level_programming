#include <stdio.h>
/**
 * main - sum of even-valued fibonacci numbers not more than 4,000,0000
 *
 * Return: 0 for completion
 */
int main(void)
{
	unsigned long int f1 = 1;
	unsigned long int f2 = 2;
	unsigned long int sum = 2;
	unsigned long int F;

	do {
		F = f1 + f2;
		if ((F % 2) == 0)
		{
			sum = sum + F;
		}
		f1 = f2;
		f2 = F;
	} while (F <= 4000000);
	printf("%lu\n", sum);
	return (0);
}
