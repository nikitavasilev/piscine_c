/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_cols_rows.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvasilev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 16:24:08 by nvasilev          #+#    #+#             */
/*   Updated: 2020/09/20 14:49:10 by iouali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_check_cols(int **tab, int value, int x, int y);
int		ft_check_rows(int **tab, int value, int x, int y);

int		ft_check_cols_rows(int **tab, int value, int x, int y)
{
	if (ft_check_cols(tab, value, x, y) && ft_check_rows(tab, value, x, y))
		return (1);
	return (0);
}

int		ft_check_cols(int **tab, int value, int x, int y)
{
	int i;
	int j;

	i = x;
	j = y;
	while (--i > 0)
	{
		if (value == tab[i][j])
			return (0);
	}
	return (1);
}

int		ft_check_rows(int **tab, int value, int x, int y)
{
	int i;
	int j;

	i = x;
	j = y;
	while (--j > 0)
	{
		if (value == tab[i][j])
			return (0);
	}
	return (1);
}
