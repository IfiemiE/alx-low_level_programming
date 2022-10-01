#include <stdio.h>
#include <stdlib.h>

/**
  * main - adds numbers entered
  * at command line
  * @argc: number of arguments
  * @argv: list of passed arguments, as array of strings
  * Return: 0, for a successful run; 1, for error
  */
int main(int argc, char **argv)
{
	int i, j;
	int sum = 0;

	if (argc < 2)
	{
		printf("%d\n", sum);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if ((argv[i][j] < '0') || (argv[i][j] > '9'))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum = sum + atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
