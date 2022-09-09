#include <stdio.h>
/**
 * main - to display all letters but q and e
 * Return: 0 to terminate program
 */

int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if ((alpha != 'q') && (alpha != 'e'))
		{
			putchar(alpha);
		}
	}
	putchar('\n');
	return (0);
}
