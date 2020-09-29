/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvasilev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 04:46:01 by nvasilev          #+#    #+#             */
/*   Updated: 2020/09/17 15:50:01 by nvasilev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void			ft_putchar(char c)
{
	write(1, &c, 1);
}

unsigned int	ft_strlen(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int				ft_check_base(char *base)
{
	unsigned int i;
	unsigned int j;

	if (ft_strlen(base) <= 1)
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		if (base[i] <= 31 && base[i] >= 127)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void			ft_putnbr_base(int nbr, char *base)
{
	unsigned int u_nbr;
	unsigned int base_len;

	base_len = ft_strlen(base);
	if (!ft_check_base(base))
		return ;
	u_nbr = nbr;
	if (nbr < 0)
	{
		u_nbr *= -1;
		ft_putchar('-');
	}
	if (u_nbr / base_len)
		ft_putnbr_base(u_nbr / base_len, base);
	ft_putchar(base[u_nbr % base_len]);
}
