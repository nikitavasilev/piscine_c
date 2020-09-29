/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_col2row.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mquijada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 20:13:04 by mquijada          #+#    #+#             */
/*   Updated: 2020/09/20 15:31:29 by iouali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_col2row(int **tab, int col_position)
{
	int i;
	int row;
	int *dest;

	row = 1;
	i = 0;
	dest = malloc(sizeof(dest) * 4);
	while (row <= 4)
	{
		dest[i] = tab[row][col_position];
		i++;
		row++;
	}
	return (dest);
}

int	*ft_col2row_rev(int **tab, int col_position)
{
	int i;
	int row;
	int *dest;

	row = 4;
	i = 0;
	dest = malloc(sizeof(dest) * 4);
	while (row >= 1)
	{
		dest[i] = tab[row][col_position];
		i++;
		row--;
	}
	return (dest);
}
