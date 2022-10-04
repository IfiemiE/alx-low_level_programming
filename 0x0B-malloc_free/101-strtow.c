#include "main.h"
#include <stdlib.h>
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
			if (i == 0)
				w++;
			else
			{
				if (*(s + i - 1) == ' ')
					w++;
			}
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
	int c, wc = 0;
	char **arr;

	if ((str == NULL) || (*str == ' '))
		return (NULL);
	wc = countw(str);
	arr = malloc(wc * sizeof(*arr));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < wc; i++)
	{
		if (*(str + i) != ' ')
		{
			if ((i == 0) || (*(str + i - 1) == ' '))
			{
				c = countchar(str + i);
				arr[i] = malloc((c + 1) * sizeof(*arr[i]));
				if (arr[i] == NULL)
				{
					for (j = i; j >= 0; j--)
						free(arr[i]);
					free(arr);
					return (NULL);
				}
				for (j = 0; j < c; j++)
					arr[i][j] = *(str + i + j);
				arr[i][j] = '\0';
			}
		}
	}
	arr[i] = NULL;
	return (arr);
}
