#include <stdio.h>
#include <stdlib.h>

char *ft_strjoin(int size, char **strs, char *sep);

int main(int argc, char *argv[])
{
	char *sep = "--++--";

	char *ret_str = ft_strjoin(argc, argv, sep);
	printf("%s\n", ret_str);
	free(ret_str);
	return (0);
}
