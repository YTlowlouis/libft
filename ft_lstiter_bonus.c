/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loboehm <loboehm@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 14:16:35 by loboehm           #+#    #+#             */
/*   Updated: 2025/11/09 14:21:41 by loboehm          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*x;

	if (!lst)
		return ;
	x = lst;
	while (x)
	{
		f(x->content);
		x = x->next;
	}
}
