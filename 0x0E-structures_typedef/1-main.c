#include "dog.h"
#include <stdio.h>

/**
  * main - tests codes
  * Return: 0 for success exit
  */
int main(void)
{
	struct dog my_dog;
	struct dog *d = &my_dog;

	init_dog(d, "poppy", 3.5, "Bob");

	printf("name: %s, age: %.1f, Owner: %s\n", my_dog.name,
		my_dog.age, my_dog.owner);



	return (0);
}
