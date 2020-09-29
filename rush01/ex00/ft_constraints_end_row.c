/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_constraints_end_row.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouali <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 15:19:27 by iouali            #+#    #+#             */
/*   Updated: 2020/09/20 15:31:02 by iouali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_how_many_can_you_see(int *tab_row, int control_nb);
int	*ft_only_row(int **tab, int row);
int	*ft_only_rev_row(int **tab, int row);
int	*ft_col2row(int **tab, int col_position);
int	*ft_col2row_rev(int **tab, int col_position);

int	ft_constraints_end_row(int **tab, int row)
{
	int		control_nb;
	int		col;
	int		*dest;

	col = 0;
	control_nb = tab[row][col];
	dest = ft_only_row(tab, row);
	if (ft_how_many_can_you_see(dest, control_nb) == 0)
	{
		free(dest);
		return (0);
	}
	col = 5;
	control_nb = tab[row][col];
	dest = ft_only_rev_row(tab, row);
	if (ft_how_many_can_you_see(dest, control_nb) == 0)
	{
		free(dest);
		return (0);
	}
	return (1);
}

int	ft_constraints_end_col(int **tab, int col)
{
	int		control_nb;
	int		row;
	int		*dest;

	row = 0;
	control_nb = tab[row][col];
	dest = ft_col2row(tab, col);
	if (ft_how_many_can_you_see(dest, control_nb) == 0)
	{
		free(dest);
		return (0);
	}
	row = 5;
	control_nb = tab[row][col];
	dest = ft_col2row_rev(tab, col);
	if (ft_how_many_can_you_see(dest, control_nb) == 0)
	{
		free(dest);
		return (0);
	}
	return (1);
}
