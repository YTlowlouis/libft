/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loboehm <loboehm@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 15:01:53 by loboehm           #+#    #+#             */
/*   Updated: 2025/11/08 15:17:28 by loboehm          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*final;
	size_t	x;

	x = 0;
	final = NULL;
	if (!s)
		return (0);
	final = malloc(ft_strlen(s) + 1);
	if (!final || !s)
		return (NULL);
	while (x < ft_strlen(s))
	{
		final[x] = f(x, s[x]);
		x++;
	}
	final[x] = '\0';
	return (final);
}
