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
	int i = 0, j = 0;
	char *start = NULL;
	int len_needle = 0, len_hay = 0;
	int stp = 0;
	int is_possible = 0;

	for (i = 0; *(needle + i); i++)
		len_needle++;

	for (i = 0; *(haystack + i); i++)
		len_hay++;

	if ((len_needle != 0) && (len_hay != 0))
	{
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
				if ((j == len_needle) && (is_possible == 1))
					break;
			}
			else
			{
				is_possible = 0;
				start = NULL;
				j = 0;
			}
			i++;
		}
		if (j < len_needle)
			start = NULL;
	}
	return (start);
}
