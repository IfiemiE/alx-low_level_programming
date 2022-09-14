#include <stdio.h>
/**
 * main - displays all natural numbers that are
 * multiples of 3 or 5 up to, but excluding, 1024
 *
 * Return: 0 to termminate program successfully
 */
int main(void)
{
	int k;
	int r3;
	int r5;
	int sum = 0;

	for (k = 1; k < 1024; k++)
	{
		r3 = k % 3;
		r5 = k % 5;
		if ((r3 == 0) || (r5 == 0))
		{
			sum = sum + k;
		}
	}
	printf("%d", sum);
	printf("\n");

	return (0);
}
