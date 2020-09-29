/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvasilev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/08 20:50:09 by nvasilev          #+#    #+#             */
/*   Updated: 2020/09/09 11:39:13 by nvasilev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_units(int nb)
{
	ft_putchar(nb % 10 + '0');
}

void	ft_print_tens(int nb)
{
	ft_putchar(nb / 10 + '0');
}

void	ft_print_comb2(void)
{
	int		left;
	int		right;

	left = 0;
	while (left <= 98)
	{
		right = left + 1;
		while (right <= 99)
		{
			ft_print_tens(left);
			ft_print_units(left);
			ft_putchar(' ');
			ft_print_tens(right);
			ft_print_units(right);
			if (left != 98 || right != 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			right++;
		}
		left++;
	}
}
