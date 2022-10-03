#include "main.h"
#include <stdlib.h>

/**
  * _strdup - creates a memory space for an array,
  * copies a string into array, and return a pointer
  * to the array
  * @str: the given string
  * Return: pointer to the created and assigned array
  */
char *_strdup(char *str)
{
	char *ptr;
	unsigned int i, len = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; *(str + i) != '\0'; i++)
		len++;
	len++;
	ptr = malloc(len * sizeof(*ptr));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		*(ptr + i) = *(str + i);

	return (ptr);
}
