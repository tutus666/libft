/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armansuy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 13:11:10 by armansuy          #+#    #+#             */
/*   Updated: 2021/03/23 13:16:09 by armansuy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	n;

	if (!s)
		return (0);
	str = malloc(ft_strlen(s) + 1);
	if (!str)
		return (0);
	n = -1;
	while (s[++n])
		str[n] = f(n, s[n]);
	str[n] = 0;
	return (str);
}
