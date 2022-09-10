#include <stdio.h>
/**
 * main - display all digits of base 16
 * Return: 0 to terminate program
 */

int main(void)
{
	int n;
	char alpha;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
	}

	for (alpha = 'a'; alpha <= 'f'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
