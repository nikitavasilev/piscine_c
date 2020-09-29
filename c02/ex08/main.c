#include <stdio.h>

char *ft_strlowcase(char *str);

int main(void)
{
	char str[] = "ughriOUHHgoei53g65greGFGS\n*&";

	printf("%s\n", ft_strlowcase(str));
	return (0);
}
