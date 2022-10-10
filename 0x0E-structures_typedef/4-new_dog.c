#include "dog.h"
#include <stdio.h>
/**
  * creates - an instance of a type dog_t
  * @name: the name of the new dog
  * @age: the age og the new dog
  * @owner: onwer of the new dog
  * Return:pointer to a new instance of type dog_t
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *sparky;

	if (sparky)
		return (NULL);
	sparky->name = name;
	sparky->owner = owner;
	sparky->age = age;

	return (sparky);
}
