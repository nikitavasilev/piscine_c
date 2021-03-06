/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvasilev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 21:33:45 by nvasilev          #+#    #+#             */
/*   Updated: 2020/09/10 12:56:00 by nvasilev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int		temp;
	int		n;
	int		i;

	i = 0;
	n = size - 1;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[n - i];
		tab[n - i] = temp;
		i++;
	}
}
