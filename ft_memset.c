/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loboehm <loboehm@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 16:34:31 by loboehm           #+#    #+#             */
/*   Updated: 2025/11/09 09:44:05 by loboehm          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	x;
	char	*new;

	new = (char *)s;
	x = 0;
	while (n)
	{
		new[x] = (unsigned char)c;
		n--;
		x++;
	}
	s = (void *)new;
	return (s);
}
