#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* print_array - prints integer array values to stdout
* @a: given array
* @n: given number of elements of a to be printed
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{

		printf("%d", a[i]);
		if (i < (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
