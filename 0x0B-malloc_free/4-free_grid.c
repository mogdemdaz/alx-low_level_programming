#include "main.h"

/**
 * free_grid - frees a 2 dimensional array
 * @grid: grid to free
 * @height: height to reach
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
