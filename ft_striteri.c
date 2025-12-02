/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loboehm <loboehm@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 15:20:38 by loboehm           #+#    #+#             */
/*   Updated: 2025/11/08 13:31:10 by loboehm          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	x;

	x = 0;
	if (!s)
		return ;
	while (x < ft_strlen(s))
	{
		f(x, &(s[x]));
		x++;
	}
}
