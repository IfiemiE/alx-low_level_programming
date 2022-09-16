#include <stdio.h>
#include <math.h>
#include <stdlib.h>
/**
* main - finds the largest prime factor of 612852475143
* Return: 0 to terminate program
*/
int main(void)
{
	long int N = 612852475143;
	long int pf, i, j;
	int isprime = 1;

	i = 3;
	while (i  <= (N / i))
	{
		j = 2;
		while (j <= (i / j))
		{
			if ((i % j) == 0)
			{
				isprime = 0;
				break;
			}
			j = j + 2;
		}
		if (isprime == 1)
		{
			if ((N % i) == 0)
			{
				pf = i;
				do {
					N = N / i;
				} while ((N % i) == 0);
			}
		}
		i = i + 2;
	}
	if (pf >= N)
	{
		printf("%ld\n", pf);
	}
	else
	{
		printf("%ld\n", N);
	}
	return (0);
}
