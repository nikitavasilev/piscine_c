#include <stdio.h>

void ft_rev_int_tab(int *tab, int size);

int main(void)
{
	int i;
	int tab[] = {0, 1, 2, 3, 4, 5, 6, 7, 8};

	ft_rev_int_tab(tab, 9);
	i = 0;
	while (i < 9)
	{
		printf("%d\n", tab[i]);
		i++;
	}
	return (0);
}
