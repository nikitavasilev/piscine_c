/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvasilev <nvasilev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 16:13:23 by nvasilev          #+#    #+#             */
/*   Updated: 2020/10/01 15:17:20 by nvasilev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void			ft_strcpy_start_to_end(char *dest, char *start, char *end)
{
	while (start < end)
	{
		*dest = *start;
		start++;
		dest++;
	}
	*dest = '\0';
}

int				ft_is_in_charset(char c, char *charset)
{
	unsigned int i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

unsigned int	ft_count_words(char *str, char *charset)
{
	unsigned int i;
	unsigned int count_words;

	i = 0;
	count_words = 0;
	while (str[i])
	{
		if (!ft_is_in_charset(str[i], charset))
		{
			count_words++;
			while (str[i] && !ft_is_in_charset(str[i], charset))
				i++;
		}
		i++;
	}
	return (count_words);
}

char			**ft_split(char *str, char *charset)
{
	unsigned int	size_words;
	unsigned int	row;
	char			*start_word;
	char			**strs;

	size_words = ft_count_words(str, charset);
	strs = malloc(sizeof(char *) * (size_words + 1));
	if (!strs)
		return (0);
	row = 0;
	while (*str)
	{
		if (!ft_is_in_charset(*str, charset))
		{
			start_word = str;
			while (*str && !ft_is_in_charset(*str, charset))
				str++;
			strs[row] = malloc(str - start_word + 1);
			ft_strcpy_start_to_end(strs[row], start_word, str);
			row++;
		}
		str++;
	}
	strs[row] = 0;
	return (strs);
}
