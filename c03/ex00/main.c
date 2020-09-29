#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2);

int main(void)
{
    char str1[] = "";
    char str2[] = "first str";

	printf("%d\n", strcmp(str1, str2));
    printf("%d\n", ft_strcmp(str1, str2));
    return (0);
}
