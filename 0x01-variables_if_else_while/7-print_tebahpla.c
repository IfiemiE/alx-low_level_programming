#include <stdio.h>
/**
 * main - display lower case alphabet in reverse order
 * Return: 0 to terminate program
 */

int main(void)
{
	char alpha;

	for (alpha = 'z'; 'a' <= alpha; alpha--)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
