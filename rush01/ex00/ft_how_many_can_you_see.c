/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_how_many_can_you_see.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mquijada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 20:46:11 by mquijada          #+#    #+#             */
/*   Updated: 2020/09/20 15:22:58 by iouali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_how_many_can_you_see(int *tab_row, int control_nb)
{
	int	i;
	int	how_many_do_you_see;
	int	largest_building;

	i = 0;
	how_many_do_you_see = 1;
	largest_building = tab_row[0];
	while (i < 3)
	{
		if (largest_building < tab_row[i + 1])
		{
			how_many_do_you_see += 1;
			largest_building = tab_row[i + 1];
		}
		i++;
	}
	if (how_many_do_you_see == control_nb)
		return (1);
	else
		return (0);
}
