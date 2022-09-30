#include "main.h"
#include <stdio.h>

/**
  * main - prints the number of arguments passed
  * @argc: first argument of main - argument count
  * @argv: list of other arguments passed at command line
  * Return: 0 always
  */
int main(int argc, char **argv)
{
	int i;
	int count = 0;

	for (i = 0; (i < argc) && *(*argv + i) != '\0'; i++)
	{
		count++;
	}
	printf("%d\n", count - 1);
	return (0);
}
