/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armansuy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 12:58:14 by armansuy          #+#    #+#             */
/*   Updated: 2021/03/23 14:17:16 by armansuy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_size(unsigned int n)
{
	int	size;

	size = 1;
	while (n > 9)
	{
		n /= 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char			*s;
	int				size;
	int				neg;
	unsigned int	nb;

	neg = 0;
	nb = n;
	if (n < 0 && ++neg)
		nb = -n;
	size = ft_size(nb) + neg;
	s = malloc(size + 1);
	if (!s)
		return (0);
	s[size] = 0;
	while (size--)
	{
		s[size] = nb % 10 + 48;
		nb /= 10;
	}
	if (neg)
		s[0] = '-';
	return (s);
}
