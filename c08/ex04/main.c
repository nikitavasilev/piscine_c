#include <stdio.h>
#include <stdlib.h>
#include "ft_stock_str.h"

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);

int main(int argc, char *argv[])
{
	int i;
	t_stock_str *str;

	str = ft_strs_to_tab(argc, argv);
	i = 0;
	while (i < argc)
	{
		printf("%d\n", str[i].size);
		printf("%s\n", str[i].str);
		printf("%s\n", str[i].copy);
		free(str[i].str);
		free(str[i].copy);
		i++;
	}
	free(str);
	return (0);
}
