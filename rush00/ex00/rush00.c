/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvasilev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 20:19:36 by nvasilev          #+#    #+#             */
/*   Updated: 2020/09/13 20:32:05 by nvasilev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_print_top_and_bottom(int x);
void	ft_print_middle(int x, int y);

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
		ft_print_top_and_bottom(x);
	if (y >= 2 && x > 0)
	{
		ft_print_middle(x, y);
		ft_putchar('\n');
		ft_print_top_and_bottom(x);
	}
	if (x > 0 && y > 0)
		ft_putchar('\n');
}

void	ft_print_top_and_bottom(int x)
{
	int i;

	i = 0;
	while (i < x)
	{
		if ((i == 0) || (i == x - 1))
			ft_putchar('o');
		else
			ft_putchar('-');
		i++;
	}
}

void	ft_print_middle(int x, int y)
{
	int	i;
	int	j;

	i = 2;
	while (y > 2 && i < y)
	{
		ft_putchar('\n');
		j = 0;
		while (j < x)
		{
			if ((j == 0) || (j == (x - 1)))
				ft_putchar('|');
			else
				ft_putchar(' ');
			j++;
		}
		i++;
	}
}
