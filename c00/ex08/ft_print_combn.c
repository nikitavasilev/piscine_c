/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvasilev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 11:55:22 by nvasilev          #+#    #+#             */
/*   Updated: 2020/09/09 18:13:39 by nvasilev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	max_nb;

	max_nb = nb;
	if (max_nb < 0)
	{
		ft_putchar('-');
		max_nb *= -1;
	}
	if (max_nb > 9)
		ft_putnbr(max_nb / 10);
	ft_putchar('0' + max_nb % 10);
}

void	ft_print_nums()
void	ft_print_combn(int n)
{
	int		i;
	int		num;

	num = n;
	char base[] = "0123456789";
	if (!(n <= 0 || n >= 10))
	{
		j = 0
		while (j <= 9)
		{
			i = 0;
			while (i < n)
			{
				ft_putchar(base[i]);
				i++;
			}
			ft_putchar(',');
			ft_putchar(' ');	
		}
	}
}
