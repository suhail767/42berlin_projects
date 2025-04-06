#include "rush01.h"

int	is_safe(int grid[SIZE][SIZE], int row, int col, int num)
{
	for (int i = 0; i < SIZE; i++)
		if (grid[row][i] == num || grid[i][col] == num)
			return (0);
	return (1);
}