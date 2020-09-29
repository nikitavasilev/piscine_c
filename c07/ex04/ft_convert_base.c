/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvasilev <nvasilev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 15:28:16 by nvasilev          #+#    #+#             */
/*   Updated: 2020/09/28 21:09:20 by nvasilev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

unsigned int	ft_strlen(char *str);
int				ft_check_base(char *base);
int				ft_atoi_base(char *str, char *base);

int				count_size(long nbr, int base_len)
{
	int size;

	size = 0;
	if (nbr < 0)
		size++;
	while (nbr)
	{
		nbr /= base_len;
		size++;
	}
	return (size);
}

char			*ft_size_null(char *base)
{
	char *str;

	if (!(str = malloc(2)))
		return (0);
	str[0] = base[0];
	str[1] = '\0';
	return (str);
}

char			*ft_putnbr_base(int nbr, char *base)
{
	unsigned int	u_nbr;
	unsigned int	base_len;
	unsigned int	size;
	char			*str;

	base_len = ft_strlen(base);
	size = count_size(nbr, base_len);
	if (!size)
		return (ft_size_null(base));
	if (!(str = malloc(size + 1)))
		return (0);
	u_nbr = nbr;
	if (nbr < 0)
	{
		u_nbr *= -1;
		str[0] = '-';
	}
	str[size] = '\0';
	while (u_nbr)
	{
		str[size - 1] = base[u_nbr % base_len];
		u_nbr /= base_len;
		size--;
	}
	return (str);
}

char			*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int res;

	if (!ft_check_base(base_from) || !ft_check_base(base_to))
		return (0);
	res = ft_atoi_base(nbr, base_from);
	return (ft_putnbr_base(res, base_to));
}
