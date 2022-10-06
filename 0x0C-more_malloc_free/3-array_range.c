#include "main.h"
#include <stdlib.h>
/**
  * array_range - creates an array of integers
  * and pre-assign numbers to each int unit block
  * @min: minimum integer to be assigned
  * @max: maximum integer to be assigned
  * Return: pointer to the created array
  */
int *array_range(int min, int max)
{
	int i, j, width = 0;
	int *arr;

	if (min > max)
		return (NULL);
	for (i = min; i <= max; i++)
		width++;
	arr = malloc(width * sizeof(*arr));
	if (arr == NULL)
		return (NULL);
	j = min;
	for (i = 0; i < width; i++)
	{
		*(arr + i) = j;
		j++;
	}
	return (arr);
}
