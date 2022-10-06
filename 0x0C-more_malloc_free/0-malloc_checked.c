#include "main.h"
#include <stdlib.h>
/**
  * malloc_checked - creates and passes pointer
  * to a block of memory space.
  * @b: indicated amount of int-space needed
  * Return: pointer to the first block of memory created
  */
void *malloc_checked(unsigned int b)
{
	void *block;

	block = malloc(b);
	if (block == NULL)
	{
		exit(98);
	}
	return (block);
}
