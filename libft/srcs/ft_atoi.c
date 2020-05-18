/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twebb <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 10:14:34 by twebb             #+#    #+#             */
/*   Updated: 2019/06/12 14:15:42 by twebb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char const *str)
{
	int		res;
	int		neg;
	size_t	i;

	neg = 1;
	res = 0;
	i = 0;
	while (ft_iswhitespace(str[i]))
		i++;
	if (str[i] == '-')
		neg = -1;
	if ((str[i] == '-') || (str[i] == '+'))
		i++;
	while (ft_isdigit(str[i]))
	{
		if (res <= 2147483647 / 10)
		{
			res = res * 10 + (str[i++] - 48);
		}
		else if (neg == 1)
			return (-1);
		else
			return (0);
	}
	return (res * neg);
}
