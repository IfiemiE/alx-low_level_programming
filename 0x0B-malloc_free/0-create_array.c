#include "main.h"
#include <stdlib.h>

/**
  * create_array - creates an array of characters,
  * and initialize to a character
  * @size: the given length of array to be created
  * @c: the character with which the array is initialized
  * Return: the created array-pointer
  */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		ptr = malloc(size * sizeof(*ptr));
		if (ptr == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i < size; i++)
			{
				*(ptr + i) = c;
			}
		}
	}
	return (ptr);
}


