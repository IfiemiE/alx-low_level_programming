#include "main.h"
#include <stdlib.h>

/**
  * alloc_grid - creates and return a 2D array with malloc
  * @width: given number of elements in each 1D array
  * @height: given number of 1D array
  * Return: pointer to the created 2D array
  */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **arr;

	if ((height <= 0) || (width <= 0))
	{
		return (NULL);
	}
	arr = malloc(height * sizeof(*arr));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		*(arr + i) = malloc(width * sizeof(**arr));
		if (arr[i] == NULL)
		{
			for (j = i; j >= 0; j--)
				free(arr[j]);

			free(arr);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			*(arr[i] + j) = 0;
		}
	}
	return (arr);
}
