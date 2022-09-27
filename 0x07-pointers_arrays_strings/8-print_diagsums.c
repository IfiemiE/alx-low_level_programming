#include "main.h"
#include <stdio.h>
/**
  * print_diagsums - prints the sums of the diagonals
  * of a square matrix
  * @a: 2D array representing the matrix
  * @size: dimension of the matrix
  */
void print_diagsums(int *a, int size)
{
	int i;
	int sumR = 0, sumL = 0;

	for (i = 0; i < size; i++)
	{
		sumR += a[i * size + i];
		sumL += a[i * size + ((size - 1) - i));
	}
	printf("%d %d\n", sumR, sumL);
}
