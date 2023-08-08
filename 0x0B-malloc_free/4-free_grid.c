#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a two dimension array
 *
 * @grid: the two dimension array
 * @height: num of array in the array
 *
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int h;

	h = 0;
	while (h < height)
	{
		free(grid[h]);
		h++;
	}
	free(grid);
}
