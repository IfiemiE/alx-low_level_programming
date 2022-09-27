#include "main.h"
/**
  * _strstr - locates first occurrence of a substring
  * in a string
  * @haystack: the given string
  * @needle: the given substring
  * Return: NULL if not found, or the pointer to the beginning
  * of the located substring
  */
char *_strstr(char *haystack, char *needle)
{
	char *h;
	char *n;

	for (; *haystack != '\0'; haystack++)
	{
		h = haystack;
		n = needle;
		while ((*h == *n) && (*n != '\0'))
		{
			h++;
			n++;
		}
		if (*n == '\0')
			return (haystack);
	}
	return (0);
}
