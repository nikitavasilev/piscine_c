void *ft_print_memory(void *addr, unsigned int size);
unsigned int ft_strlen(char *str);

int main(void)
{
	unsigned int size;
	char str[] = "éSuper\r gr ogjnerlkgnlerk \n \tjbhgrfewggr kjnvksdj % 765fe";

	size = ft_strlen(str);
	ft_print_memory(str, size);
	return (0);
}

unsigned int ft_strlen(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
