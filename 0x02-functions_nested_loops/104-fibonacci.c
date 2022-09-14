#include <stdio.h>

/**
* main - displays first 98 fibonacci numbers
* Return: 0 always
*/
int main(void)
{
	long double f1 = 1;
	long double f2 = 2;
	long double F;
	long double sum = 0;
	int i;

	for (i = 1; i <= 98; i++)
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
		sum = sum + F;
	}
	printf("%Lg\n", sum);
	return (0);
}
