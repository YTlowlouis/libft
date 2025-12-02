/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loboehm <loboehm@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 16:34:31 by loboehm           #+#    #+#             */
/*   Updated: 2025/11/09 09:51:39 by loboehm          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	x;
	char	*x1;
	char	*x2;

	x1 = (char *)s1;
	x2 = (char *)s2;
	x = 0;
	while (x < n)
	{
		if (x2[x] != x1[x])
		{
			return ((unsigned char)x1[x] - (unsigned char)x2[x]);
		}
		x++;
	}
	return (0);
}
