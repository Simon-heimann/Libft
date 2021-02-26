/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sheimann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 15:08:55 by sheimann          #+#    #+#             */
/*   Updated: 2021/02/16 15:08:56 by sheimann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		nbword(char const *str, char c)
{
	int			i;
	int			words;
	int			bol;

	i = 0;
	words = 0;
	bol = 0;
	while (str[i] == c && str[i])
		i++;
	while (str[i])
	{
		if (str[i] != c && str[i])
			bol = 1;
		if (str[i] == c)
		{
			while (str[i] == c && str[i])
				i++;
			if (str[i])
				words++;
		}
		else
			i++;
	}
	return (words + bol);
}

static char		*mem(char const *str, char c)
{
	int			i;
	char		*res;

	i = 0;
	res = 0;
	while (str[i] && str[i] != c)
		i++;
	res = (char *)malloc(sizeof(char) * (i + 1));
	if (!res)
		return (NULL);
	ft_strlcpy(res, str, i + 1);
	return (res);
}

char			**ft_split(char const *s, char c)
{
	int			i;
	int			words;
	char		**res;

	i = -1;
	if (!s)
		return (NULL);
	words = nbword(s, c);
	if (!(res = malloc(sizeof(char *) * (words + 1))))
		return (NULL);
	while (++i < words)
	{
		while (s[0] == c)
			s++;
		if (!(res[i] = mem(s, c)))
		{
			while (i > 0)
				free(res[i--]);
			free(res);
			return (NULL);
		}
		s += ft_strlen(res[i]);
	}
	res[i] = NULL;
	return (res);
}
