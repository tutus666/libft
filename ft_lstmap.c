/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armansuy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 13:37:10 by armansuy          #+#    #+#             */
/*   Updated: 2021/03/25 14:29:17 by armansuy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*begin;
	t_list	*next;

	if (!lst)
		return (0);
	begin = ft_lstnew(f(lst->content));
	if (!begin)
		return (0);
	while (lst->next)
	{
		lst = lst->next;
		next = ft_lstnew(f(lst->content));
		if (!next)
		{
			ft_lstclear(&begin, del);
			return (0);
		}
		ft_lstadd_back(&begin, next);
	}
	return (begin);
}
