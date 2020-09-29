#include <stdio.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main(void)
{
	char *src = "Three";
	char dest[30] = "One Two ";
	unsigned int size = 10;

	printf("%u\n", ft_strlcat(dest, src, size));
	//printf("%lu\n", strlcat(dest, src, size));
	printf("%s\n", dest);
	return (0);
}
