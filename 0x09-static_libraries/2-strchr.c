#include "main.h"
/**
* _strchr - locates first occurence of a character
* in a string
* @s: the given string
* @c: the given character
* Return: a pointer to the first occurrence
* or NULL, if not found
*/
char *_strchr(char *s, char c)
{
	int i;
	char *locstr = NULL;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
		{
			locstr = s + i;
			break;
		}
	}
	if (*(s + i) == c)
		locstr = s + i;

	return (locstr);
}
