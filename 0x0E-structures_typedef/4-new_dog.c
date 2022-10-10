#include "dog.h"
#include <stdlib.h>
/**
  * new_dog - creates an instance of a type dog_t
  * @name: the name of the new dog
  * @age: the age of the new dog
  * @owner: onwer of the new dog
  * Return:pointer to a new instance of type dog_t
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, len_name = 0, len_owner = 0;
	dog_t *puppy;

	if ((name == NULL) || (owner == NULL))
		return (NULL);
	puppy = malloc(sizeof(dog_t));
	if (puppy == NULL)
		return (NULL);
	for (i = 0; *(name + i); i++)
		len_name++;
	len_name++;
	for (i = 0; *(owner + i); i++)
		len_owner++;
	len_owner++;
	puppy->name = malloc(len_name * sizeof(char));
	if (puppy->name == NULL)
	{
		free(puppy);
		return (NULL);
	}
	puppy->owner = malloc(len_owner * sizeof(char));
	if (puppy->owner == NULL)
	{
		free(puppy->name);
		free(puppy);
		return (NULL);
	}
	for (i = 0; *(name + i) != '\0'; i++)
		(*puppy).name[i] = name[i];
	for (i = 0; *(owner + i) != '\0'; i++)
		(*puppy).owner[i] = owner[i];
	puppy->age = age;
	return (puppy);
}
