#ifndef MAIN_H
#define MAIN_H

/**
  * struct dog - for describing a dog by some
  * elements
  * @name: first element
  * @age: second element
  * @owner: third element
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *, char *, float, char *);
void print_dog(struct dog *);
typedef struct dog dog_t;

#endif
