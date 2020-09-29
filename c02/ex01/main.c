#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int main(void)
{
	char *src = "";
	char dest[25] = "salut";

	ft_strncpy(dest, src, 20);
	printf("%s\n", dest);
	return (0);
}
