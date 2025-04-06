#include "rush01.h"

int	count_visible(int *line)
{
	int max = 0;
	int count = 0;

	for (int i = 0; i < SIZE; i++)
	{
		if (line[i] > max)
		{
			max = line[i];
			count++;
		}
	}
	return (count);
}