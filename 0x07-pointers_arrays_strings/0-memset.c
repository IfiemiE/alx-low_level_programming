#include "main.h"
/**
* _memset - fills a specified byte length of memory
* with a given constant byte
* @s: the given string
* @b: the given cnstant byte
* @n: the given length of memory bytes to fill
* Return: the effected string
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i, lens = 0;

	for (i = 0; *(s + i); i++)
	{
		lens++;
	}
	for (i = 0; (i < n) && (i <= lens); i++)
	{
		*(s + i) = b;
	}

	return (0);
}
