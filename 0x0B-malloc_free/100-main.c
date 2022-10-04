#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * main - test code
  * @argc: number of arguments
  * @argv: string vector of arguments
  *Return: 0, or 1 if there's error
  */
int main(int argc, char *argv[])
{
	char *s;

	s = argstostr(argc, argv);
	if (s == NULL)
	{
		printf("Failed to allocate\n");
		return (1);
	}
	printf("%s\n", s);
	free(s);
	return (0);
}
