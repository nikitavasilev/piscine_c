/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvasilev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 20:19:51 by nvasilev          #+#    #+#             */
/*   Updated: 2020/09/24 19:03:07 by nvasilev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_solution(int board[10][10]);
int		is_valid(int board[10][10], int row, int col);
int		ft_solve(int board[10][10], int col, int *count);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_ten_queens_puzzle(void)
{
	int i;
	int j;
	int board[10][10];
	int count;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			board[i][j] = 0;
			j++;
		}
		i++;
	}
	ft_solve(board, 0, &count);
	return (count);
}

void	ft_print_solution(int board[10][10])
{
	int col;
	int row;

	col = 0;
	while (col < 10)
	{
		row = 0;
		while (row < 10)
		{
			if (board[col][row])
				ft_putchar(row + '0');
			row++;
		}
		col++;
	}
	ft_putchar('\n');
}

/*
** 1st loop checks the same row on the left side
** 2nd loop checks left upper diagonal
** 3rd loop checks left lower diagonal
*/

int		ft_is_valid(int board[10][10], int row, int col)
{
	int i;
	int j;

	i = -1;
	while (++i < col)
	{
		if (board[row][i])
			return (0);
	}
	i = row + 1;
	j = col + 1;
	while (--i >= 0 && --j >= 0)
	{
		if (board[i][j])
			return (0);
	}
	i = row - 1;
	j = col + 1;
	while (--j >= 0 && ++i < 10)
	{
		if (board[i][j])
			return (0);
	}
	return (1);
}

int		ft_solve(int board[10][10], int col, int *count)
{
	int i;
	int res;

	res = 0;
	if (col >= 10)
	{
		ft_print_solution(board);
		(*count)++;
		return (1);
	}
	i = 0;
	while (i < 10)
	{
		if (ft_is_valid(board, i, col))
		{
			board[i][col] = 1;
			res = ft_solve(board, col + 1, count);
			board[i][col] = 0;
		}
		i++;
	}
	return (res);
}
