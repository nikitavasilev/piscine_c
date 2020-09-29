#include <stdio.h>
#include <limits.h>

void ft_putnbr_base(int nbr, char *base);

int main(void)
{
	int nb;
	char *base16 = "0123456789ABCDEF";
	char *base8 = "poneyvif";
	char *base2 = "01";

	nb = INT_MAX;
	printf("base 16:\n");
	ft_putnbr_base(nb, base16);
	printf("\n\nbase 8:\n");
	ft_putnbr_base(nb, base8);
	printf("\n\nbase 2:\n");
	ft_putnbr_base(nb, base2);
	printf("\n");
	return (0);
}
