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
	int i, j, k;
	char *start = NULL;
	int len_needle = 0, len_hay = 0;

	for (i = 0; *(needle + i); i++)
		len_needle++;

	for (i = 0; *(haystack + i); i++)
		len_hay++;

	if ((len_needle != 0) && (len_hay != 0))
	{
		for (i = 0; *(haystack + i) != '\0'; i++)
		{
			if (*(haystack + i) == *needle)
			{
				start = haystack + i;
				j = i;
				for (k = 0; k < len_needle; k++)
				{
					if (*(haystack + j) == *(needle + k))
						j++;
					else
					{
						start = NULL;
						break;
					}
				}
				if (*(needle + k) == '\0')
					return (start);
			}
		}
	}
	return (0);
}
