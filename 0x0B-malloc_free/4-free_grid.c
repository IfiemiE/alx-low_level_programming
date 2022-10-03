#include "main.h"
#include <stdlib.h>
/**
  * free_grid - to free malloc-created 2D array
  * @grid: given pointer to the grid
  * @height: the given height of the grid
  * Return: nothing
  */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
