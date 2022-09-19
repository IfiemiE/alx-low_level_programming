#include "main.h"
/**
* puts_half - prints second half of a string
*@str: given string
*/
void puts_half(char *str)
{
	int count = 0;
	int i, n;
	int start;

	for (i = 0; *(str + i); i++)
	{
		count++;
	}

	if ((count % 2) == 0)
	{
		n = count / 2;
	}
	else
	{
		n = (count - 1) / 2;
	}
	start = count - n;
	for (i = start; i < count; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
