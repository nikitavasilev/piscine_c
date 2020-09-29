#include <limits.h>
#include <stdlib.h>
#include <stdio.h>

int *ft_range(int min, int max);

int main(void)
{
	int i;
	int min;
	int max;
	int *range;

	min = INT_MIN;
	max = INT_MAX;
	range = ft_range(min, max);
	i = 0;
	while (i < (max - min))
	{
		printf("%d\n", range[i]);
		i++;
	}
	free(range);
	return (0);
}
