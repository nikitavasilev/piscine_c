#include <stdio.h>
#include <string.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int main(void)
{
	char src[] = "Three";
	char dest[25] = "One Two ";
	ft_strncat(dest, src, 0);
	//strncat(dest, src, 0);
	printf("%s\n", dest);
	return (0);
}
