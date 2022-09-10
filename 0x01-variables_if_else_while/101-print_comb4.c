#include <stdio.h>
/**
 * main - combine three digits, omitting a triplet combo
 * and not repeating combos of like digits,
 * irrespective of their order
 * Return: 0 to terminate program
 */

int main(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i <= 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			for (k = j + 1; k <= 9; k++)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
				if ((k != 9) || (j != k - 1) || (i != j - 1))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
