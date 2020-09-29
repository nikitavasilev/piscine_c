/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvasilev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 20:58:43 by nvasilev          #+#    #+#             */
/*   Updated: 2020/09/10 21:52:40 by nvasilev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_char_is_alpha(char c)
{
	if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')))
		return (0);
	return (1);
}

int		ft_char_is_numeric(char c)
{
	if (!(c >= '0' && c <= '9'))
		return (0);
	return (1);
}

char	*ft_strlowcase(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	unsigned int	i;

	ft_strlowcase(str);
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	i = 1;
	while (str[i])
	{
		if (ft_char_is_alpha(str[i]) &&
			!(ft_char_is_alpha(str[i - 1])) &&
			!(ft_char_is_numeric(str[i - 1])))
			str[i] -= 32;
		i++;
	}
	return (str);
}
