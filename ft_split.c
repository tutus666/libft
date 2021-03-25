/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armansuy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 13:05:23 by armansuy          #+#    #+#             */
/*   Updated: 2021/03/23 15:47:49 by armansuy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s != c && *s)
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

static char	*ft_copy(char const *s, char c)
{
	char	*str;
	size_t	size;
	size_t	n;

	str = (char *)s;
	size = 0;
	while (*str != c && *str && ++size)
		str++;
	str = malloc(size + 1);
	if (!str)
		return (0);
	n = -1;
	while (++n < size)
		str[n] = *s++;
	str[n] = 0;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	size_t	size;
	size_t	i;

	size = ft_count_words(s, c);
	strs = malloc(sizeof(char *) * (size + 1));
	if (!strs)
		return (0);
	i = -1;
	while (++i < size)
	{
		while (*s == c && *s)
			s++;
		if (*s != c && *s)
		{
			strs[i] = ft_copy(s, c);
			if (!strs[i])
				return (0);
			s += ft_strlen(strs[i]);
		}
	}
	strs[size] = 0;
	return (strs);
}
