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
	int i, j;
	char *start = NULL;
	int len_needle = 0;
	int stp = 0;
	int is_possible = 0;

	for (i = 0; *(needle + i); i++)
		len_needle++;

	i = 0;
	j = 0;
	while ((stp == 0) && (*(haystack + i) != '\0'))
	{
		if (*(haystack + i) == *(needle + j))
		{
			if (j == 0)
			{
				is_possible = 1;
				start = haystack + i;
			}
			j += 1;
		}
		else
		{
			is_possible = 0;
			start = NULL;
			j = 0;
		}
		if ((j == len_needle) && (is_possible == 1))
			stp = 1;
		else
			i++;
	}
	if (j < len_needle)
		start = NULL;

	return (start);
}
