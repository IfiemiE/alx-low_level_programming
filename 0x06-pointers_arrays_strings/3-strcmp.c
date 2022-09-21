#include "main.h"
/**
* _strcmp - compares strings just like strcmp function
* @s1: first argument
* @s2: second argument
* Return: an integer - 0 for exactly same strings
* and any other integer for unsimilar strings
*/
int _strcmp(char *s1, char *s2)
{
	int d1, d2, diff;
	int n = 0, cont = 1;
	int i = 0;

	for (i = 0; (*(s1 + i) == *(s2 + i)) && (cont == 1); i++)
	{
		n++;
		if (*(s1 + i))
		{
			cont = 0;
			n--;
		}
	}

	d1 = *(s1 + n);
	d2 = *(s2 + n);
	diff = d1 - d2;

	return (diff);
}
