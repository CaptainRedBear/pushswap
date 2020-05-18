/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twebb <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 09:55:08 by twebb             #+#    #+#             */
/*   Updated: 2019/06/06 14:25:55 by twebb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nw(char const *str, char c)
{
	int words;

	words = 0;
	while (*str && *str != c)
	{
		str++;
		words++;
	}
	while (*str)
	{
		while (*str == c)
		{
			str++;
			if (*str != c && *str)
				words++;
		}
		str++;
	}
	return (words);
}

static int	ft_lw(char const *str, char c)
{
	int count;

	count = 0;
	while (*str && *str != c)
	{
		count++;
		str++;
	}
	return (count);
}

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	char	**split;

	if (!s || (!(split = (char**)malloc(sizeof(char*) * (ft_nw(s, c) + 1)))))
		return (NULL);
	i = 0;
	j = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			if (!(split[j] = (char*)malloc(sizeof(char) * (ft_lw(s, c) + 1))))
				return (NULL);
			while (*s != c && *s)
				split[j][i++] = (char)*s++;
			split[j][i] = '\0';
			i = 0;
			j++;
		}
	}
	split[j] = NULL;
	return (split);
}
