#include <stdio.h>
/**
 * main - display double combinations of single digits
 * omitting twin pair, and without repeating combinations
 * of same digits irrespective of order
 * Return: 0 to terminate program
 */

int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			if ((i != j - 1) || (j != 9))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
