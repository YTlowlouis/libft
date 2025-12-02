/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loboehm <loboehm@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 16:34:31 by loboehm           #+#    #+#             */
/*   Updated: 2025/11/08 15:11:01 by loboehm          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	x;

	if (n < 1)
		return (0);
	x = 0;
	while (x < n && (s2[x] != '\0' || s1[x] != '\0'))
	{
		if (s2[x] != s1[x])
		{
			return (((unsigned char)s1[x]) - ((unsigned char)s2[x]));
		}
		x++;
	}
	return (0);
}
