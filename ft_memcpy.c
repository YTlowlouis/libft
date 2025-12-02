/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loboehm <loboehm@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 16:34:31 by loboehm           #+#    #+#             */
/*   Updated: 2025/11/09 09:48:32 by loboehm          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	x;

	x = 0;
	while (x < n)
	{
		*(char *)dest = *(char *)src;
		dest++;
		src++;
		x++;
	}
	return (dest - x);
}
