#include "main.h"
/**
 * _strspn - returns the length of a subsection
 *	which is a contiguous subset of another string
 * @s: the given string
 * @accept: the string subset of characters
 * Return: an integer showing found length in first subsection
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int i, j;
	int is_same;

	for (i = 0; *(s + i); i++)
	{
		is_same = 0;
		for (j = 0; *(accept + j); j++)
		{
			if (*(s + i) == *(accept + j))
			{
				n += 1;
				is_same = 1;
				break;
			}
		}
		if ((n >= 1) && (is_same == 0))
			break;
	}
	return (n);
}
