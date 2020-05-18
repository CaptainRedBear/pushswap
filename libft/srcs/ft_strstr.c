/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twebb <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 13:50:55 by twebb             #+#    #+#             */
/*   Updated: 2019/05/29 07:54:10 by twebb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char const *str, char const *sub)
{
	int i;
	int j;

	if (ft_strlen(sub) == 0)
		return ((char *)str);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == sub[j])
		{
			if (sub[j + 1] == '\0')
				return ((char *)&str[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
