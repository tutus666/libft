/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armansuy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 13:10:20 by armansuy          #+#    #+#             */
/*   Updated: 2021/03/23 13:15:18 by armansuy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	n;
	char	*str;

	str = malloc (ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!str)
		return (0);
	n = -1;
	while (s1[++n])
		str[n] = s1[n];
	n = -1;
	while (s2[++n])
		str[n + ft_strlen(s1)] = s2[n];
	str[ft_strlen(s1) + ft_strlen(s2)] = 0;
	return (str);
}
