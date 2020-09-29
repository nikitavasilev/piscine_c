/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvasilev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 23:46:42 by nvasilev          #+#    #+#             */
/*   Updated: 2020/09/24 18:28:52 by nvasilev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int i;
	int square;

	if (nb == 1)
		return (1);
	else if (nb <= 0)
		return (0);
	if (sizeof(int) == 2)
		square = 181;
	else
		square = 46340;
	i = 1;
	while (i < (nb / i) && i <= square)
		i++;
	if (i * i == nb)
		return (i);
	return (0);
}
