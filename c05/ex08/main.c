#include <stdio.h>

int ft_ten_queens_puzzle(void);

int main(void)
{
	int solutions;

	solutions = ft_ten_queens_puzzle();
	printf("%d\n", solutions);
	return (0);
}
