/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvasilev <nvasilev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 20:56:08 by nvasilev          #+#    #+#             */
/*   Updated: 2020/09/29 21:37:30 by nvasilev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

unsigned int		ft_strlen(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char				*ft_strcpy(char *dest, char *src)
{
	unsigned int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int				i;
	t_stock_str		*str;

	str = (malloc(sizeof(t_stock_str) * (ac + 1)));
	if (!str)
		return (0);
	i = 0;
	while (i < ac)
	{
		str[i].size = ft_strlen(av[i]);
		str[i].str = malloc(str[i].size + 1);
		if (!str[i].str)
			return (0);
		str[i].copy = malloc(str[i].size + 1);
		if (!str[i].copy)
			return (0);
		ft_strcpy(str[i].str, av[i]);
		ft_strcpy(str[i].copy, av[i]);
		i++;
	}
	str[i].str = '\0';
	return (str);
}
