#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a 2D array of integers.
 * @grid: pointer to the 2D array to free.
 * @height: height of the grid.
 *
 * Description: Frees the memory allocated for a 2D array of integers.
 * Each subarray is freed first before freeing the entire grid.
 *
 * Return: nothing.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
