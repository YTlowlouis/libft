/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loboehm <loboehm@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 16:34:31 by loboehm           #+#    #+#             */
/*   Updated: 2025/11/08 10:46:22 by loboehm          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	x;

	c = c % 256;
	x = 0;
	if (c == 0)
	{
		return ((char *)&(s[ft_strlen((char *)s)]));
	}
	while (s[x] != '\0')
		x++;
	while (x >= 0)
	{
		if (s[x] == c)
		{
			return ((char *)&(s[x]));
		}
		x--;
	}
	return (NULL);
}
