#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  * main - multiplies two numbers
  * passed from command line
  * @argc: number of arguments passed
  * @argv: list of arguments passed
  * Return: 0 if successful and 1 if error exist in input
  */
int main(int argc, char **argv)
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
}

