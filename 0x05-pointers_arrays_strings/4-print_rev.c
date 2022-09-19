#include "main.h"
/**
* print_rev - prints a string in reverse
* @s: given string
*/
void print_rev(char *s)
{
	int i = 0;
	int k;

	while (*(s + i))
	{
		i++;
	}
	for (k = (i - 1); k >= 0; k--)
	{
		_putchar(*(s + k));
	}
	_putchar('\n');
}
