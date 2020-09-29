#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod);

int main(void)
{
	int div, mod;

	ft_div_mod(10, 2, &div, &mod);
	printf("div: %d, mod: %d\n", div, mod);
	return (0);
}
