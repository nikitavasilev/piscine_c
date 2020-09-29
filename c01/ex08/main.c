#include <stdio.h>

void ft_sort_int_tab(int *tab, int size);

int main(void)
{
	int i;
	int size;
	int tab[] = { 22, 11, 186, 3, 88, 1250, 32 };

	size = 7;
	ft_sort_int_tab(tab, size);
	i = 0;
	while (i < size)
	{
		printf("%d\n", tab[i]);
		i++;
	}
	return (0);
}
