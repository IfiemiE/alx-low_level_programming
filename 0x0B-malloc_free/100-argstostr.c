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
	int i, j, len_i, last_i, len = 0;
	char *str;

	if (ac == 0)
		return (NULL);
	if (av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);
		for (j = 0; (av[i] + j); j++)
			len++;
	}
	len++;
	str = malloc(len * sizeof(*str));
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		len_i = 0;
		for (j = 0; av[i][j] != '\0'; j++)
			len_i++;
		for (j = 0; *(av[i] + j) != '\0'; j++)
		{
			*(str + i * len_i + j) = *(av[i] + j);
		}
		last_i = i;
	}
	*(str + last_i * len_i + j) = '\0';
	return (str);
}
