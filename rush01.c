#include <unistd.h>
#include "rush01.h"

#define SIZE 4

// Function declarations
int		parse_input(char *str, int *views);
int		solve(int grid[SIZE][SIZE], int *views, int row, int col);
int		is_safe(int grid[SIZE][SIZE], int row, int col, int num);
int		check_views(int grid[SIZE][SIZE], int *views);
int		count_visible(int *line);
void	print_grid(int grid[SIZE][SIZE]);

int	main(int argc, char **argv)
{
	int grid[SIZE][SIZE] = {0};
	int views[SIZE * 4];

	if (argc != 2 || !parse_input(argv[1], views))
	{
		write(1, "Error\n", 6);
		return (1);
	}
	if (solve(grid, views, 0, 0))
		print_grid(grid);
	else
		write(1, "Error\n", 6);
	return (0);
}