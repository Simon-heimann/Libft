/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sheimann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 19:59:35 by sheimann          #+#    #+#             */
/*   Updated: 2021/02/10 19:59:47 by sheimann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int				count_size(const char *s)
{
	int					i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char					*ft_strnstr(const char *s, const char *f, size_t x)
{
	unsigned long		i;
	unsigned long		j;

	i = 0;
	if (f[0] == '\0')
		return ((char *)s);
	while (s[i] && i < x)
	{
		j = 0;
		while (s[i + j] && s[i + j] == f[j] && i + j < x)
		{
			j++;
			if (j == (unsigned long)count_size((char *)f))
			{
				return ((char *)&s[i]);
			}
		}
		i++;
	}
	return (0);
}
