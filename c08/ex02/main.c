#include <stdio.h>
#include <stdlib.h>
#include "ft_abs.h"

int absolute(int value)
{
	return (ABS(value));
}

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%d\n", absolute(atoi(argv[1])));
	return (0);
}
