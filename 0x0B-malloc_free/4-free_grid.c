#include "main.h"

/**
 * free_grid - Frees a 2 dimensional grid previously created by alloc_grid
 * @grid: The address of the two dimensional grid
 * @height: Height of the grid
 */

void free_grid(int **grid, int height)
{
int i;

for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);

return;
}
