#include <stdio.h>

void ft_ft(int *nbr);

int main(void)
{
	int nb;
	int *p;

	nb = 28;
	p = &nb;
	ft_ft(p);

	printf("%d\n", nb);
	return (0);
}
