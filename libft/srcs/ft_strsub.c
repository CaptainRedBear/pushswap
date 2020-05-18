/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twebb <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 10:12:12 by twebb             #+#    #+#             */
/*   Updated: 2019/06/11 14:49:05 by twebb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*fresh;
	size_t	i;

	if (!s)
		return (0);
	if (!len)
	{
		fresh = ft_strnew(0);
		return (fresh);
	}
	i = 0;
	fresh = ft_strnew(len);
	if (!fresh)
		return (0);
	while (i < len)
	{
		fresh[i] = s[i + start];
		i++;
	}
	return (fresh);
}
