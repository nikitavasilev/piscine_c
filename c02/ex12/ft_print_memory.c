/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvasilev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 13:11:13 by nvasilev          #+#    #+#             */
/*   Updated: 2020/09/16 11:37:26 by nvasilev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_hex_columns(int i, int j, char *str, unsigned int size);
void	ft_print_dots(int i, int j, char *str);
unsigned int g_len = 0;

void	ft_putchar(unsigned char c)
{
	write(1, &c, 1);
}

void	ft_dec_to_hex(unsigned int nb, int zeros)
{
	const char	*base16;

	base16 = "0123456789abcdef";
	if (zeros && g_len < 16)
		ft_putchar('0');
	if (nb >= 16)
	{
		if (zeros)
			g_len++;
		ft_dec_to_hex(nb / 16, zeros);
	}
	ft_putchar(base16[nb % 16]);
	g_len = 0;
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	int		i;
	int		j;
	char	*str;

	str = (char *)addr;
	i = 0;
	while ((unsigned int)i < size)
	{
		ft_dec_to_hex((unsigned int)&str[i], 1);
		ft_putchar(':');
		j = -1;
		while (++j < 16)
			ft_print_hex_columns(i, j, str, size);
		ft_putchar(' ');
		j = 0;
		while (j < 16 && str[i + j])
		{
			ft_print_dots(i, j, str);
			j++;
		}
		ft_putchar('\n');
		i += 16;
	}
	return (addr);
}

void	ft_print_hex_columns(int i, int j, char *str, unsigned int size)
{
	if (!(j % 2))
		ft_putchar(' ');
	if ((unsigned int)(i + j) > size)
	{
		ft_putchar(' ');
		ft_putchar(' ');
	}
	else
	{
		if ((unsigned char)str[i + j] < 16)
			ft_putchar('0');
		ft_dec_to_hex((unsigned char)str[i + j], 0);
	}
}

void	ft_print_dots(int i, int j, char *str)
{
	if ((unsigned char)str[i + j] >= 32 && (unsigned char)str[i + j] < 127)
		ft_putchar((unsigned char)str[i + j]);
	else
		ft_putchar('.');
}
