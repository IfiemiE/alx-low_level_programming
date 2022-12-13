#include "main.h"
/**
* _puts - prints given string to stdout
*@str: given string
*/
void _puts(char *str)
{
	int i;

	i = 0;
	while (*(str + i))
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
