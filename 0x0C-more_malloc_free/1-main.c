#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * main - tests codes
  * Return: 0 for success exit
  */
int main(void)
{
	char *concat;

	concat = string_nconcat("Best ", "School !!!", 6);
	printf("%s\n", concat);
	free(concat);



	return (0);
}
