#include "main.h"
#include <stdlib.h>
/*
 * string_nconcat - append n bytes of a second string
 * to a first one
 * @s1:first string
 * @s2: second string
 * @n: number of bytes to append to s1, from s2
 * Return: pointer to the concatenated strings
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int len, len1 = 0, len2 = 0;
	int i;
	char *str;

	if (s1 != NULL)
	{
		for (i = 0; *(s1 + i) != '\0'; i++)
			len++;
	}
	if (s1 != NULL)
	{
		for (i = 0; *(s2 + i) != '\0'; i++;)
			len2++;
	}
	if (n >= len2)
		len = len1 + len2;
	else
		len = len1 + n;

	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		if (i < len1)
			*(str + i) = *(s1 + i);
		else
			*(str + i) = *(s2 + i - len1);
	}
	*(str + i) = '\0';

	return (str);

