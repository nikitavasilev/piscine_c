#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int main(void)
{
	char *src = "fonctionnement de la fonction";
	char dest[7];

	printf("%d\n", ft_strlcpy(dest, src, 7));
	printf("%s\n", dest);
	return (0);
}
