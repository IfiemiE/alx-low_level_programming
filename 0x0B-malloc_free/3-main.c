#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * main - tests code
  * Return: 0 for code success
  */
int main(void)
{
	int **grid;
	int i, j;

	grid = alloc_grid(6, 4);
	if (grid == NULL)
		return (1);


	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 6; j++)
			printf("%d ", grid[i][j]);

		printf("\n");
	}
	grid[0][3] = 98;
	grid[3][4] = 402;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 6; j++)
			printf("%d ", grid[i][j]);
		printf("\n");
	}
	free(grid);
	return (0);
}
