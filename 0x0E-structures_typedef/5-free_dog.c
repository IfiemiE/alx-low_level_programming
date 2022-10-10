#include "dog.h"
#include <stdlib.h>

/**
  * free_dog - deallocates memories of a dog-t type
  * @d pointer to the given dog.
  * Return: nothing
  */
void free_dog(dog_t *d)
{
	if (d =! NULL)
	{
		free(d->name);
		free(d->owner);

		free(d);
	}
	else
		return (NULL);
}
