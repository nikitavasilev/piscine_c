#include <stdio.h>
#include <stdlib.h>

char **ft_split(char *str, char *charset);

int main(int argc, char *argv[])
{
	unsigned int i;

	if (argc == 3)
	{
		char **arr = ft_split(argv[1], argv[2]);

		i = 0;
		while (arr[i])
		{
			printf("%s\n", arr[i]);
			free(arr[i]);
			i++;
		}
		free(arr);
	}
	return (0);
}
