/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvasilev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 05:49:35 by nvasilev          #+#    #+#             */
/*   Updated: 2020/09/24 06:48:19 by nvasilev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	unsigned int	i;
	int				*tmp;

	*range = NULL;
	if (min >= max)
		return (0);
	*range = malloc(sizeof(int) * (max - min));
	if (!*range)
		return (-1);
	tmp = *range;
	i = 0;
	while (min < max)
	{
		tmp[i] = min;
		min++;
		i++;
	}
	return (i);
}
