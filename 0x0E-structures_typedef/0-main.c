#include "dog.h"
#include <stdio.h>

/**
  * main - tests codes
  * Return: 0 for success exit
  */
int main(void)
{
	struct dog my_dog;

	my_dog.name = "poppy";
	my_dog.age = 3.5;
	my_dog.owner = "Bob";

	printf("name: %s, age: %.1f, Owner: %s\n", my_dog.name,
		my_dog.age, my_dog.owner);



	return (0);
}
