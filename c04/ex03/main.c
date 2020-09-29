#include <stdio.h>

int ft_atoi(char *str);

int main(void)
{
	char *str = "  \n    \v   \f  \t \r ---+--+--1234568ab567";

	printf("%d\n", ft_atoi(str));
	return (0);
}
