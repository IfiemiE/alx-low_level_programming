#include <stdio.h>
/**
 * main - display two pairs of digits, without repeating
 * any collection with same pairs, irrespective of pair order
 * Return: 0 to terminate the program
 */

int main(void)
{
	int i;
	int j;
	int a1;
	int b1;
	int a2;
	int b2;

	for (i = 0; i <= 99; i++)
	{
		a1 = i / 10;
		b1 = i % 10;
		for (j = i + 1; j <= 99; j++)
		{
			a2 = j / 10;
			b2 = j % 10;
			putchar(a1 + '0');
			putchar(b1 + '0');
			putchar(' ');
			putchar(a2 + '0');
			putchar(b2 + '0');
			if ((j != 99) || (i != j - 1))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
