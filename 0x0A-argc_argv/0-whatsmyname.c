#include "main.h"
/**
  * main - to print the name of the
  * program itself
  * @argc: the argument count integer
  * @argv: the list of arguments passed
  * Return: 0 always
  */
int main(int argc, char **argv)
{
	int j = argc;

	for (j = 0; argv[0][j]; j++)
	{
		_putchar(argv[0][j]);
	}
	_putchar('\n');

	return (0);
}
