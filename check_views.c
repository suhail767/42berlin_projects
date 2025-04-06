#include "rush01.h"

int	check_views(int grid[SIZE][SIZE], int *views)
{
	int line[SIZE];

	// Top view
	for (int col = 0; col < SIZE; col++)
	{
		for (int row = 0; row < SIZE; row++)
			line[row] = grid[row][col];
		if (count_visible(line) != views[col])
			return 0;
	}

	// Bottom view
	for (int col = 0; col < SIZE; col++)
	{
		for (int row = 0; row < SIZE; row++)
			line[row] = grid[SIZE - 1 - row][col];
		if (count_visible(line) != views[SIZE + col])
			return 0;
	}

	// Left view
	for (int row = 0; row < SIZE; row++)
	{
		for (int col = 0; col < SIZE; col++)
			line[col] = grid[row][col];
		if (count_visible(line) != views[2 * SIZE + row])
			return 0;
	}

	// Right view
	for (int row = 0; row < SIZE; row++)
	{
		for (int col = 0; col < SIZE; col++)
			line[col] = grid[row][SIZE - 1 - col];
		if (count_visible(line) != views[3 * SIZE + row])
			return 0;
	}

	return 1;
}