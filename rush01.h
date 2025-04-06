// rush01.h
#ifndef RUSH01_H
#define RUSH01_H

# define SIZE 4

# include <unistd.h>

// Function declarations
int		parse_input(char *str, int *views);
int		solve(int grid[SIZE][SIZE], int *views, int row, int col);
int		is_safe(int grid[SIZE][SIZE], int row, int col, int num);
int		check_views(int grid[SIZE][SIZE], int *views);
int		count_visible(int *line);
void	print_grid(int grid[SIZE][SIZE]);

#endif