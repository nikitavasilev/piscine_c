#include <stdlib.h>
#include <stdio.h>

char *ft_convert_base(char *nbr, char *base_from, char *base_to);

int main(void)
{
	char *nbr = "  	 	\n \t \r \f \v 	-2147483647g6dsd531e gr";
	char *base_from = "0123456789";
	char *base_to = "0123456789abcdef";

	printf("%s\n", ft_convert_base(nbr, base_from, base_to));
	return (0);
}
