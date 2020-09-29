#include <stdlib.h>
#include <stdio.h>

char *ft_strdup(char *src);

int main(void)
{
	char *dup;
	char *str = "test";

	dup = ft_strdup(str);
	printf("%s\n", dup);
	free(dup);
	return (0);
}
