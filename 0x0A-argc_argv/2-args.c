#include "main.h"
#include <stdio.h>

/**
  * main - prints all arguments passed to main
  * @argc: argument count
  * @argv: list of arguments as an array of strings
  * Return: 0 always
  */
int main(int argc, char **argv)
{
	int i;
	char *ptr;

	for (i = 0; i < argc; i++)
	{
		ptr = argv[i];
		printf("%s\n", ptr);
	}
	return (0);
}
