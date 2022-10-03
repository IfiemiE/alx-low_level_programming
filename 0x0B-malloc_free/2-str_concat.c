#include "main.h"
#include <stdlib.h>

/**
  * str_concat - create a concat 0f two strings
  * assigned to a new pointer
  * @s1: first string
  * @s2: second string
  * Return: new pointer to s1 and s2 concatenation
  */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	unsigned int i, j;
	unsigned int len1 = 0, len2 = 0;
	unsigned int len;

	if (s1 != NULL)
	{
		for (i = 0; *(s1 + i) != '\0'; i++)
			len1++;
	}
	if (s2  != NULL)
	{
		for (i = 0; *(s2 + i) != '\0'; i++)
			len2++;
	}
	len = len1 + len2;
	ptr = malloc((len + 1) * sizeof(*ptr));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		if (i < len1)
			*(ptr + i) = *(s1 + i);
		else
		{
			j = i - len1;
			*(ptr + i) = *(s2 + j);
		}
	}
	*(ptr + i) = '\0';
	return (ptr);
}
