#include <stdio.h>

int ft_str_is_printable(char *str);

int main(void)
{
	char *str = "ger654gregw\n~";
	printf("%d\n", ft_str_is_printable(str));
	return (0);
}
