/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_only_rev_row.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mquijada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 20:28:43 by mquijada          #+#    #+#             */
/*   Updated: 2020/09/20 10:51:54 by iouali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_only_rev_row(int **tab, int row)
{
	int		i;
	int		j;
	int		*dest;

	i = 4;
	j = 0;
	dest = malloc(sizeof(dest) * 4);
	while (j < 4)
	{
		dest[j] = 0;
		j++;
	}
	j = 0;
	while (i >= 1)
	{
		dest[j] = tab[row][i];
		i--;
		j++;
	}
	return (dest);
}
