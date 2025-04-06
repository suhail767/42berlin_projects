#include "rush01.h"

int	solve(int grid[SIZE][SIZE], int *views, int row, int col)
{
	if (row == SIZE)
		return (check_views(grid, views));
	if (col == SIZE)
		return (solve(grid, views, row + 1, 0));

	for (int num = 1; num <= 4; num++)
	{
		if (is_safe(grid, row, col, num))
		{
			grid[row][col] = num;
			if (solve(grid, views, row, col + 1))
				return (1);
			grid[row][col] = 0;
		}
	}
	return (0);
}