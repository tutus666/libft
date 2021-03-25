/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armansuy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 13:11:39 by armansuy          #+#    #+#             */
/*   Updated: 2021/03/23 13:18:02 by armansuy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	n;
	size_t	i;
	size_t	j;

	if (!*needle)
		return ((char *)haystack);
	i = -1;
	while (haystack[++i] && i < len)
	{
		n = -1;
		j = i - 1;
		while (haystack[++j] == needle[++n] && j < len)
			if (!needle[n + 1])
				return ((char *)haystack + i);
	}
	return (0);
}
