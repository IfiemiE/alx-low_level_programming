#include "main.h"
#include <stdio.h>
/**
* reverse_array - reverse  elements of an integer array
* @a: integer array
* @n: number of elements in array
*/
void reverse_array(int *a, int n)
{
	int i = 0;
	int swap, mid;

	mid = n / 2;
	for (i = 0; i < mid; i++)
	{
		swap = *(a + i);
		*(a + i) = *(a + n - 1 - i);
		*(a + n - 1 - i) = swap;
	}
}
