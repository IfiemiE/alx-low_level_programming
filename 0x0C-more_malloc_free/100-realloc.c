#include "main.h"
#include <stdlib.h>
/**
  * _realloc - create a new adjusted length of a memory block
  * and pass content from an old block to it
  * @ptr: pointer to the old block;
  * @old_size: size of block in bytes allocated for ptr
  * @new_size: new, adjusted size of for new block, in bytes
  * Return: pointer to the new block
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i, minL, t = 0;
	char *str;

	if (new_size == old_size)
		return (ptr);
	if (ptr != NULL)
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}
	else
	{
		t = 1;
		str = malloc(new_size);
		if (str == NULL)
			return (NULL);
	}
	if (t == 0)
	{
		str = malloc(new_size);
		if (str == NULL)
			return (NULL);
	}
	if (new_size >= old_size)
		minL = old_size;
	else
		minL = new_size;

	for (i = 0; i < minL; i++)
		str[i] = *((char *)ptr + i);
	free(ptr);
	return (str);
}
