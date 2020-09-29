/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvasilev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 19:00:38 by nvasilev          #+#    #+#             */
/*   Updated: 2020/09/20 15:21:06 by iouali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	init_cols_and_rows(int **board, char *str);
void	init_cols(int **board, char *str, int row);
void	init_rows(int **board, char *str, int col);

int		**init(char *str)
{
	int				**board;
	unsigned int	i;
	unsigned int	j;

	board = malloc(sizeof(*board) * 6);
	i = 0;
	while (i < 6)
	{
		board[i] = malloc(sizeof(**board) * 6);
		j = 0;
		while (j < 6)
		{
			board[i][j] = 0;
			j++;
		}
		i++;
	}
	init_cols_and_rows(board, str);
	return (board);
}

void	init_cols_and_rows(int **board, char *str)
{
	init_cols(board, str, 0);
	str += 8;
	init_cols(board, str, 5);
	str += 8;
	init_rows(board, str, 0);
	str += 8;
	init_rows(board, str, 5);
}

void	init_cols(int **board, char *str, int row)
{
	int		i;

	i = 1;
	while (*str && i <= 4)
	{
		board[row][i] = *str - '0';
		str += 2;
		i++;
	}
}

void	init_rows(int **board, char *str, int col)
{
	int		i;

	i = 1;
	while (*str && i <= 4)
	{
		board[i][col] = *str - '0';
		str += 2;
		i++;
	}
}
