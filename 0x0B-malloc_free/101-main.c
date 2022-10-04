#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * main - test code
  *Return: 0, or 1 if there's error
  */
int main(void)
{
	char **s;
	int i;

	s = strtow("         ALX School    #cisfun");
	if (s == NULL)
	{
		printf("Failed to allocate\n");
		return (1);
	}
	for (i = 0; i < 3; i++)
	{
		printf("%s\n", s[i]);
	}
	free(s);
	return (0);
}
