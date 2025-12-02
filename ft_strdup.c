/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loboehm <loboehm@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 10:15:23 by loboehm           #+#    #+#             */
/*   Updated: 2025/11/08 10:20:10 by loboehm          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	int		x;

	x = 0;
	str = malloc(ft_strlen((char *)(s)) + 1);
	if (!str)
		return (NULL);
	while (s[x] != '\0')
	{
		str[x] = s[x];
		x++;
	}
	str[x] = '\0';
	return (str);
}
