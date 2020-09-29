#include <stdio.h>

int ft_atoi_base(char *str, char *base);

int main(void)
{
	char *str = "  \n    \v   \f  \t \r++++--+-++----80000000Z34568ab567";
	//char *str = "2a";
	char *base = "0123456789ABCDEF";

	printf("%d\n", ft_atoi_base(str, base));
	return (0);
}
