#include "main.h"
#include <stdlib.h>

/**
  * argstostr - concatenate all arguments
  * @ac: number of arguments
  * @av: array of string arguments
  * Return: a string pointer formed by contenating
  * all entered strings
  */
char *argstostr(int ac, char **av)
{
	int i, j, k, len = 0;
	char *str;

	if (ac == 0)
		return (NULL);
	if (av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);
		for (j = 0; *(av[i] + j); j++)
			len++;
		len++;
	}
	len++;
	str = malloc(len * sizeof(char));
	if (str == NULL)
		return (NULL);
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; *(av[i] + j) != '\0'; j++)
		{
			*(str + k) = *(av[i] + j);
			k++;
		}
		k++;
		*(str + k) = '\n';
	}
	*(str + k) = '\0';
	return (str);
}
