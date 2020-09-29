/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvasilev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 04:16:25 by nvasilev          #+#    #+#             */
/*   Updated: 2020/09/17 04:22:16 by nvasilev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int nbr;

	nbr = nb;
	if (nb < 0)
	{
		nbr *= -1;
		ft_putchar('-');
	}
	if (nbr / 10)
		ft_putnbr(nbr / 10);
	ft_putchar(nbr % 10 + '0');
}
