/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouali <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 19:53:31 by iouali            #+#    #+#             */
/*   Updated: 2020/09/20 17:26:25 by iouali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		check_format(char *str);
int		**init(char *str);
int		recursive_check(int **board, int row, int col, int i);
void	print_tab(int **board);

int		main(int ac, char **av)
{
	int **board;
	int i;

	i = 0;
	if (ac != 2 || !check_format(av[1]))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	board = init(av[1]);
	if (!recursive_check(board, 1, 1, 0))
		write(1, "Error\n", 6);
	while (i < 6)
	{
		free(board[i]);
		i++;
	}
	free(board);
	return (0);
}
