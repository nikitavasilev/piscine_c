/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core_program.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouali <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 20:00:09 by iouali            #+#    #+#             */
/*   Updated: 2020/09/20 17:17:22 by iouali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_check_cols_rows(int **tab, int value, int row, int col);
int		ft_constraints_end_row(int **tab, int row);
int		ft_constraints_end_col(int **tab, int col);

void	print_tab(int **board)
{
	int		i;
	int		j;
	char	c;

	i = 1;
	while (i <= 4)
	{
		j = 1;
		while (j <= 4)
		{
			c = 48 + board[i][j];
			write(1, &c, 1);
			if (j < 4)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int		terminate_recursive(int **board, int row, int col)
{
	if (row == 5 || col == 5)
	{
		print_tab(board);
		return (1);
	}
	return (0);
}

int		recursive_check(int **board, int row, int col, int i)
{
	if (terminate_recursive(board, row, col))
		return (1);
	while (++i <= 4)
	{
		board[row][col] = i;
		if (ft_check_cols_rows(board, i, row, col) && col < 4 && row < 4 &&
			recursive_check(board, row, col + 1, 0))
			return (1);
		else if (col == 4 && ft_check_cols_rows(board, i, row, col) &&
				ft_constraints_end_row(board, row))
		{
			if (row == 4 && ft_constraints_end_col(board, col) &&
				recursive_check(board, row + 1, col, 0))
				return (1);
			else if (row != 4 && recursive_check(board, row + 1, 1, 0))
				return (1);
		}
		else if (row == 4 && ft_check_cols_rows(board, i, row, col) &&
				ft_constraints_end_col(board, col) && col != 4 &&
				recursive_check(board, row, col + 1, 0))
			return (1);
		board[row][col] = 0;
	}
	return (0);
}
