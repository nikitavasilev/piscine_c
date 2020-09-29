#include <stdio.h>
#include <string.h>

char *ft_strcat(char *dest, char *src);

int main(void)
{
    char src[] = "two";
    char dest[15] = "one";

    ft_strcat(dest, src);
	//strcat(dest, src);
    printf("%s\n", dest);
    return (0);
}
