#include "main.h"
/**
 * _strpbrk - returns the pointer to the first occurrence
 *	of a byte form a given character set(string)
 * @s: the given string
 * @accept: the string subset of characters
 * Return: an integer showing found length in first subsection
 */
char *_strpbrk(char *s, char *accept)
{
	char *start = NULL;
	int i, j;
	int stp = 0;

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; *(accept + j); j++)
		{
			if (*(s + i) == *(accept + j))
			{
				start = s + i;
				stp = 1;
				break;
			}
		}
		if (stp == 1)
			break;
	}
	return (start);
}
