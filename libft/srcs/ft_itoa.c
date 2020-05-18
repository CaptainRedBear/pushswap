/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twebb <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 11:31:01 by twebb             #+#    #+#             */
/*   Updated: 2019/06/06 13:45:54 by twebb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len(long n)
{
	int len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n *= -1;
		len++;
	}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char		*ft_itoa(int n)
{
	int		i;
	char	*fresh;
	long	nb;

	nb = n;
	i = len(nb);
	if (!(fresh = (char*)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	fresh[i--] = '\0';
	if (nb == 0)
	{
		fresh[0] = 48;
		return (fresh);
	}
	if (nb < 0)
	{
		fresh[0] = '-';
		nb = nb * -1;
	}
	while (nb > 0)
	{
		fresh[i--] = 48 + (nb % 10);
		nb = nb / 10;
	}
	return (fresh);
}
