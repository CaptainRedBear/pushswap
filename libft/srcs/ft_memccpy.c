/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twebb <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 06:59:12 by twebb             #+#    #+#             */
/*   Updated: 2019/06/06 08:31:15 by twebb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, void const *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*dstt;
	unsigned char	*srcc;

	i = 0;
	srcc = (unsigned char*)src;
	dstt = (unsigned char*)dst;
	if (dst == src)
		return (dst);
	while (i < n)
	{
		dstt[i] = srcc[i];
		if (((unsigned char*)src)[i] == (unsigned char)c)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
