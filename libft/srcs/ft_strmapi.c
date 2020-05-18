/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twebb <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 08:38:32 by twebb             #+#    #+#             */
/*   Updated: 2019/06/06 08:32:20 by twebb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*fresh;

	if (!s || !f)
		return (NULL);
	i = 0;
	fresh = ft_strnew(ft_strlen(s));
	if (!fresh)
		return (NULL);
	while (s[i] != '\0' && *s)
	{
		fresh[i] = (f)(i, s[i]);
		i++;
	}
	return (fresh);
}
