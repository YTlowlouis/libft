/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loboehm <loboehm@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 14:29:30 by loboehm           #+#    #+#             */
/*   Updated: 2025/11/09 15:44:03 by loboehm          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*x;
	t_list	*y;

	if (!lst || !del || !f)
		return (NULL);
	x = NULL;
	while (lst)
	{
		y = ft_lstnew(f(lst->content));
		if (!y)
		{
			ft_lstclear(&x, del);
			return (NULL);
		}
		ft_lstadd_back(&x, y);
		lst = lst->next;
	}
	return (x);
}
