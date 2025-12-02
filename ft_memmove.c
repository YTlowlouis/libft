/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loboehm <loboehm@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 16:34:31 by loboehm           #+#    #+#             */
/*   Updated: 2025/11/05 16:05:29 by loboehm          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*bufferd;
	char	*buffers;
	size_t	x;

	x = 0;
	buffers = (char *)src;
	bufferd = (char *)dest;
	if (bufferd > buffers)
		while (n-- > 0)
			bufferd[n] = buffers[n];
	else
		ft_memcpy(bufferd, buffers, n);
	return (dest);
}
