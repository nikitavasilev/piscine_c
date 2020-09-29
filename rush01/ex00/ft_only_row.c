/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_only_row.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mquijada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 20:28:19 by mquijada          #+#    #+#             */
/*   Updated: 2020/09/20 10:51:30 by iouali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_only_row(int **tab, int row)
{
	int		i;
	int		j;
	int		*dest;

	i = 1;
	j = 0;
	dest = malloc(sizeof(dest) * 4);
	while (j < 4)
	{
		dest[j] = 0;
		j++;
	}
	j = 0;
	while (i <= 4)
	{
		dest[j] = tab[row][i];
		i++;
		j++;
	}
	return (dest);
}
