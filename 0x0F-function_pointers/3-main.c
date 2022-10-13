#include "3-calc.h"

/**
  * main - add, subtract, minus and divide integers
  * from command line
  * @argc: number of arguments
  * @argv: string array of command line arguments
  * Return: 0 for a successful run
  */
int main(int argc, char *argv[])
{
	int (*operator)(int, int);
	int a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	operator = get_op_func(argv[2]);
	if (operator == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", operator(a, b));

	return (0);
}
