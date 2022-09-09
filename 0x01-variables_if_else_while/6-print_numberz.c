#include <stdio.h>
/**
 * main - display all single digits of base 10
 * using putchar only, at most twice
 * Return: 0 to terminate program
 */

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
	}
	putchar('\n');
	return (0);
}
