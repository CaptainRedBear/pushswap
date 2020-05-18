/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twebb <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 08:56:35 by twebb             #+#    #+#             */
/*   Updated: 2019/06/06 09:52:35 by twebb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*fresh;
	int		i;
	int		j;
	int		k;

	if (!s)
		return (0);
	i = 0;
	j = ft_strlen(s) - 1;
	k = 0;
	while (ft_iswhitespace(s[i]))
		i++;
	while (ft_iswhitespace(s[j]))
		j--;
	if (i > j)
		return (ft_strnew(1));
	fresh = ft_strnew(j - i + 1);
	if (!fresh)
		return (0);
	while (i <= j)
	{
		fresh[k++] = s[i];
		i++;
	}
	return (fresh);
}
