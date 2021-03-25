/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armansuy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 13:10:42 by armansuy          #+#    #+#             */
/*   Updated: 2021/03/24 11:39:32 by armansuy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char	*dst, const char *src, size_t dstsize)
{
	size_t	n;
	size_t	len;

	len = ft_strlen(src);
	if (dstsize)
	{
		n = -1;
		while (++n < dstsize - 1 && src[n])
			dst[n] = src[n];
		dst[n] = 0;
	}
	return (len);
}
