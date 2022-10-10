#include "dog.h"
#include <stdio.h>

/**
  * main - tests codes
  * Return: 0 for success exit
  */
int main(void)
{
	dog_t *my_dog;

	my_dog = new_dog("Poppy", 3.5, "Bob");

	printf("name: %s, age: %.1f, Owner: %s\n", my_dog->name,
		my_dog->age, my_dog->owner);



	return (0);
}
