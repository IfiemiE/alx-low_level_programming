#include <stdio.h>
/**
 * main - to display lower and upper case alphabets
 * Return: 0 to terminate program
 */

int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; ++alpha)
	{
		putchar(alpha);
	}
	for (alpha = 'A'; alpha <= 'Z'; ++alpha)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
