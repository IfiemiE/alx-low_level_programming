#include "main.h"
/**
* puts2 - prints all except 2nd and last
*@str: given string
*/
void puts2(char *str)
{
	int count = 0;
	int k, i;


	for (i = 0; *(str + i); i++)
	{
		count++;
	}
	for (k = 0; k < count; k += 2)
	{
		_putchar(*(str + k));
	}
	_putchar('\n');
}
