/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loboehm <loboehm@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 16:34:31 by loboehm           #+#    #+#             */
/*   Updated: 2025/11/09 10:50:43 by loboehm          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	a;
	size_t	b;

	a = ft_strlen((char *)src);
	b = ft_strlen(dst);
	if (b >= size)
		return (a + size);
	if (a < size - b)
		ft_memcpy(dst + b, src, a + 1);
	else
	{
		ft_memcpy(dst + b, src, size - b - 1);
		dst[size - 1] = '\0';
	}
	return (a + b);
}
