/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvasilev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 12:27:57 by nvasilev          #+#    #+#             */
/*   Updated: 2020/09/16 00:06:32 by nvasilev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(unsigned char c)
{
	write(1, &c, 1);
}

int		ft_char_is_printable(unsigned char c)
{
	if (c >= 32 && c < 127)
		return (1);
	return (0);
}

void	ft_dec_to_hex(unsigned char nb)
{
	char *base16;

	base16 = "0123456789abcdef";
	ft_putchar('\\');
	ft_putchar(base16[nb / 16]);
	ft_putchar(base16[nb % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (!ft_char_is_printable((unsigned char)*str))
			ft_dec_to_hex((unsigned char)*str);
		else
			ft_putchar(*str);
		str++;
	}
}
