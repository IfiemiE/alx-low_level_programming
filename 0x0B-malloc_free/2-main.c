#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * main - test code
  *Return: 0, or 1 if there's error
  */
int main(void)
{
	char *s;

	s = str_concat("Betty ", "Holberton");
	if (s == NULL)
	{
		printf("Failed to allocate\n");
		return (1);
	}
	printf("%s\n", s);
	return (0);
}
