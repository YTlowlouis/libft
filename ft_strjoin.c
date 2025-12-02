/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loboehm <loboehm@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 12:58:50 by loboehm           #+#    #+#             */
/*   Updated: 2025/11/08 15:04:01 by loboehm          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	int		x;
	int		y;

	x = 0;
	y = 0;
	new = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!new)
		return (NULL);
	while (s1 && s1[x])
	{
		new[x] = s1[x];
		x++;
	}
	while (s2 && s2[y])
	{
		new[x] = s2[y];
		x++;
		y++;
	}
	new[x] = '\0';
	return (new);
}
