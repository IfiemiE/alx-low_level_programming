#include "main.h"
#include <stdlib.h>
/**
  * _calloc - creates a block of memory arrays
  * @nmemb: the number of memory blocks to create
  * @size: the number of bytes to create in each block
  * Return: return the pointer to the memory block
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *block;

	if ((nmemb == 0) || (size == 0))
		return (NULL);
	block = malloc(size * nmemb);
	if (block == NULL)
		return (NULL);
	for (i = 0; i < (size * nmemb); i++)
		block[i] = 0;
	return (block);
}

