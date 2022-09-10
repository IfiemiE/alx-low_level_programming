#include <stdio.h>
/**
 * main - to display single didgits in ascending order,
 * separated by commas and spaces
 * Return: 0 to terminate program
 */

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
