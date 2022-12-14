#include "dog.h"
#include <stdlib.h>

/**
  * free_dog - deallocates memories of a dog-t type
  * @d: pointer to the given dog.
  * Return: void
  */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
