/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loboehm <loboehm@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 16:34:31 by loboehm           #+#    #+#             */
/*   Updated: 2025/11/09 10:15:36 by loboehm          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	a;
	size_t	b;

	a = 0;
	b = 0;
	if (to_find[0] == 0)
		return ((char *)(str));
	while (str[a] && a < len)
	{
		while (to_find[b] == str[a + b] && str[a + b] && a + b < len)
		{
			b++;
			if (to_find[b] == 0)
				return ((char *)str + a);
		}
		b = 0;
		a++;
	}
	return (NULL);
}
