/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twebb <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 08:39:05 by twebb             #+#    #+#             */
/*   Updated: 2019/06/11 14:31:59 by twebb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*fresh;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (0);
	i = 0;
	j = 0;
	fresh = ft_strnew((ft_strlen(s1) + ft_strlen(s2)));
	if (!fresh)
		return (0);
	while (s1[i] != '\0')
	{
		fresh[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		fresh[i + j] = s2[j];
		j++;
	}
	fresh[i + j] = '\0';
	return (fresh);
}
