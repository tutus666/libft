/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armansuy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 13:12:14 by armansuy          #+#    #+#             */
/*   Updated: 2021/03/24 13:31:46 by armansuy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	n;

	str = malloc(len + 1);
	if (!str)
		return (0);
	n = 0;
	while (n < len && start <= ft_strlen(s) && s[start])
		str[n++] = s[start++];
	str[n] = 0;
	return (str);
}
