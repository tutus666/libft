/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armansuy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 10:43:16 by armansuy          #+#    #+#             */
/*   Updated: 2021/03/26 10:43:21 by armansuy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	size_t	n;

	str = malloc(ft_strlen(s1) + 1);
	if (!str)
		return (0);
	n = -1;
	while (s1[++n])
		str[n] = s1[n];
	str[n] = 0;
	return (str);
}
