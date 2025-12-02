/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loboehm <loboehm@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 16:17:42 by loboehm           #+#    #+#             */
/*   Updated: 2025/11/08 10:24:23 by loboehm          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*rt;
	size_t			x;
	size_t			total;

	x = 0;
	total = nmemb * size;
	if (nmemb != 0 && total / nmemb != size)
		return (NULL);
	rt = malloc(total);
	if (!rt)
	{
		return (0);
	}
	while (x < nmemb * size)
	{
		rt[x] = 0;
		x++;
	}
	return ((void *)rt);
}
