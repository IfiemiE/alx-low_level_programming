#include "main.h"
#include <stdio.h>
/**
* print_array - prints a portion of an intger array
*@a: the given array
*@n: the number of elements to be printed from the start
*/
void print_array(int *a, int n)
{
	int count = 0;
	int i;

	for (i = 0; *(a + i); i++)
	{
		count++;
	}

	if (n <= count)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", *(a + i));

			if (i < (n - 1))
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
