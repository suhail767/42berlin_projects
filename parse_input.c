#include "rush01.h"

int	parse_input(char *str, int *views)
{
	int i = 0;

	while (*str && i < SIZE * 4)
	{
		if (*str >= '1' && *str <= '4')
			views[i++] = *str - '0';
		else if (*str != ' ')
			return (0);
		str++;
	}
	return (i == SIZE * 4);
}