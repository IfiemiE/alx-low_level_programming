#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * main - tests codes
  * Return: 0 for success exit
  */
int main(void)
{
	int *a, i;

	a = array_range(0, 10);
	for (i = 0; i <= 10; i++)
		printf(" %d ", a[i]);
	printf("\n");


	return (0);
}
