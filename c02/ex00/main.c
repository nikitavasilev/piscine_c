#include <stdio.h>

char *ft_strcpy(char *dest, char *src);

int main(void)
{
	char *src = "Hello";
	char dest[6];
	
	ft_strcpy(dest, src);
	printf("%s\n", dest);
	return (0);
}
