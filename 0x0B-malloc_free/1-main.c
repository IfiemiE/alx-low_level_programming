#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
  * main - tests code
  *
  * Return: 0 always (or 1 if there is error)
  */
int main(void)
{
	char *s;

	s = _strdup("ALX SE");
	if (s == NULL)
	{
		printf("Failed to allocate\n");
		return (1);
	}
	printf("%s\n", s);
	return (0);
}


