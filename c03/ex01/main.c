#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main(void)
{
    char str1[] = "first str";
    char str2[] = "firs1t str";

    printf("%d\n", ft_strncmp(str1, str2, 5));
	printf("%d\n", strncmp(str1, str2, 5));
    return (0);
}
