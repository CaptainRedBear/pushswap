/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twebb <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 07:15:44 by twebb             #+#    #+#             */
/*   Updated: 2019/05/31 08:20:22 by twebb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, void const *src, size_t len)
{
	if (dst <= src)
		ft_memcpy(dst, src, len);
	else
		while (len--)
			((char*)dst)[len] = ((char*)src)[len];
	return (dst);
}
