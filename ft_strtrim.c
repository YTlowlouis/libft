/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loboehm <loboehm@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 13:10:56 by loboehm           #+#    #+#             */
/*   Updated: 2025/11/09 15:45:59 by loboehm          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	isintset(char const *set, char to)
{
	int	x;

	x = 0;
	while (set[x] != '\0')
	{
		if (set[x] == to)
			return (1);
		x++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		c;
	int		x;
	char	*new;

	x = 0;
	if (!s1)
		return (NULL);
	if (!set)
	{
		new = ft_strdup(s1);
		return (new);
	}
	c = ft_strlen(s1) - 1;
	while (s1[x] && isintset(set, s1[x]))
		x++;
	while (c >= x && isintset(set, s1[c]))
		c--;
	new = ft_substr(s1, x, c - x + 1);
	return (new);
}
