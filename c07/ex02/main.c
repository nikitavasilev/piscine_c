#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int ft_ultimate_range(int **range, int min, int max);

int main(void)
{
	int *range;
	int i;
	int len;

	range = NULL;
	len = ft_ultimate_range(&range, INT_MIN, INT_MIN + 4);
	i = 0;
	while (i < len)
	{
		printf("%d\n", range[i]);
		i++;
	}
	free(range);
	return (0);
}
