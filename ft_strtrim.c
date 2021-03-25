/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armansuy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 13:12:05 by armansuy          #+#    #+#             */
/*   Updated: 2021/03/24 14:39:02 by armansuy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_incharset(char const *set, char c)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	start;
	size_t	end;
	size_t	i;

	if (!s1 || !set)
		return (0);
	start = 0;
	while (s1[start] && ft_is_incharset(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_is_incharset(set, s1[end - 1]))
		end--;
	str = malloc(end - start + 1);
	if (!str)
		return (0);
	i = 0;
	while (start < end)
		str[i++] = s1[start++];
	str[i] = 0;
	return (str);
}
