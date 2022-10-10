#include "dog.h"

/**
  * init_dog - initializes elements of a struct
  * @d: the type dog as first argument
  * @name: second argument, first struct dog element
  * @age: third argument, second struct dog element
  * @owner: fourth argument, third struct dog element
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
