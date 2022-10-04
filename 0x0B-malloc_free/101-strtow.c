#include "main.h"
#include <stdlib.h>

/**
  * strLen - compute length of string
  * @s: the given string
  * Return: the length
  */
int strLen(char *s)
{
	int i, len = 0;

	for (i = 0; *(s + i) != '\0'; i++)
			len++;
	return (len);
}

/**
  * countw - count number of words
  * in a string
  * @s: given string
  * Return: the number words
  */
int countw(char *s)
{
	int i, w = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) != ' ')
		{
			if ((i == 0) || (*(s + i - 1) == ' '))
				w++;
		}
	}
	return (w);
}
/**
  * countchar - counts character till a space hit
  * @s: given string
  * Return: number of characters before a space
  *
  */
int countchar(char *s)
{
	int i;
	int n = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) != ' ')
			n++;
		else
			break;
	}
	return (n);
}

/**
  * strtow - splits a string into words
  * @str: the given string argument
  *
  * Return: a pointer to the array of strings(words)
  *
  */
char **strtow(char *str)
{
	int i, j;
	int c, wc, w = 0;
	char **arr;

	if ((str == NULL) || (strLen(str) == 0))
		return (NULL);
	wc = countw(str);
	arr = malloc((wc + 1) * sizeof(*arr));
	if (arr == NULL)
		return (NULL);
	arr[wc] = NULL;
	i = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) != ' ')
		{
			if ((i == 0) || (*(str + i - 1) == ' '))
			{
				c = countchar(str + i);
				w++;
				arr[w - 1] = malloc((c + 1) * sizeof(*arr[w - 1]));
				if (arr[w - 1] == NULL)
				{
					for (j = w - 1; j >= 0; j--)
						free(arr[j]);
					free(arr);
					return (NULL);
				}
				for (j = 0; j < c; j++)
					arr[w - 1][j] = *(str + i + j);
				arr[w - 1][j] = '\0';
				i += c;
			}
			else
				i++;
		}
		else
			i++;
	}
	return (arr);
}
