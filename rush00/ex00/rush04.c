/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvasilev <nvasilev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 19:33:10 by nvasilev          #+#    #+#             */
/*   Updated: 2020/09/29 19:18:14 by nvasilev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_print_top_and_bottom(int x, char first_corner, char last_corner);
void	ft_print_middle(int x, int y);

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
		ft_print_top_and_bottom(x, 'A', 'C');
	if (y >= 2 && x > 0)
	{
		ft_print_middle(x, y);
		ft_putchar('\n');
		ft_print_top_and_bottom(x, 'C', 'A');
	}
	if (x > 0 && y > 0)
		ft_putchar('\n');
}

void	ft_print_top_and_bottom(int x, char first_corner, char last_corner)
{
	int i;

	i = 0;
	while (i < x)
	{
		if (i == 0)
			ft_putchar(first_corner);
		else if (i == x - 1)
			ft_putchar(last_corner);
		else
			ft_putchar('B');
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
				ft_putchar('B');
			else
				ft_putchar(' ');
			j++;
		}
		i++;
	}
}
