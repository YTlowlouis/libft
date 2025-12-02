/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loboehm <loboehm@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 13:59:21 by loboehm           #+#    #+#             */
/*   Updated: 2025/11/08 10:44:05 by loboehm          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	*fillarray(char c)
{
	int	x;
	int	*array;
	int	e;

	e = (int)c;
	x = 0;
	array = malloc(4 * sizeof(int));
	while (x < 4)
	{
		array[x] = 0;
		x++;
	}
	return (array);
}

static int	word_count(char *str, char c)
{
	int	x;
	int	d;

	x = 0;
	d = 0;
	while (str[x] != '\0')
	{
		if (str[x] != c && (str[x + 1] == c || str[x + 1] == '\0'))
		{
			d++;
		}
		x++;
	}
	return (d);
}

static int	fill(char *str, int nb, char **final)
{
	final[nb] = str;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**final;
	int		*tabvalues;

	tabvalues = fillarray(c);
	final = malloc((word_count((char *)s, c) + 1) * sizeof(char *));
	while (s[tabvalues[0]] != '\0')
	{
		if (s[tabvalues[0]] != c)
		{
			tabvalues[1] = tabvalues[0];
			while (s[tabvalues[0]] != '\0' && s[tabvalues[0]] != c)
				tabvalues[0] += 1;
			tabvalues[2] = tabvalues[0];
			fill(ft_substr(s, (unsigned int)tabvalues[1],
					((size_t)tabvalues[2] - tabvalues[1])),
				tabvalues[3], final);
			tabvalues[3] += 1;
		}
		if (s[tabvalues[0]] != '\0')
			tabvalues[0]++;
	}
	final[tabvalues[3]] = NULL;
	free(tabvalues);
	return (final);
}
