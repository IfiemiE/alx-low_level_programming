#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * main - adds numbers entered
  * at command line
  * @argc: number of arguments
  * @argv: list of passed arguments, as array of strings
  * Return: 0, for a successful run; 1, for error
  */
int main(int argc, char **argv)
{
	int i;
	int sum = 0;

	if (argc < 2)
	{
		printf("%d\n", sum);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if ((argv[i] != "0") && (atoi(argv[i]) == 0))
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum = sum + atoi(argv[i]);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
