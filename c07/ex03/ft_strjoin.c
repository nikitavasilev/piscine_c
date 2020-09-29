/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvasilev <nvasilev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 06:52:50 by nvasilev          #+#    #+#             */
/*   Updated: 2020/09/26 18:31:31 by nvasilev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char			*ft_strcat(char *dest, char *src)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char			*ft_strcpy(char *dest, char *src)
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

int				ft_count_strs(char **strs, int size)
{
	int				i;
	unsigned int	count;

	i = 0;
	count = 0;
	while (i < size)
	{
		count += ft_strlen(strs[i]);
		i++;
	}
	return (count);
}

char			*ft_strjoin(int size, char **strs, char *sep)
{
	int				i;
	char			*str;
	unsigned int	count;

	if (size <= 0)
	{
		str = malloc(1);
		if (!str)
			return (0);
		*str = '\0';
		return (str);
	}
	count = ft_count_strs(strs, size);
	str = malloc(sizeof(char) * (count + ft_strlen(sep) * (size - 1) + 1));
	if (!str)
		return (0);
	i = 0;
	str = ft_strcpy(str, strs[0]);
	while (++i < size)
	{
		str = ft_strcat(str, sep);
		str = ft_strcat(str, strs[i]);
	}
	str[count + ft_strlen(sep) * (size - 1)] = '\0';
	return (str);
}
