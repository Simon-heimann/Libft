/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sheimann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 12:10:51 by sheimann          #+#    #+#             */
/*   Updated: 2021/02/16 12:10:53 by sheimann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strtrim(char const *s1, char const *set)
{
	size_t		i;
	size_t		size;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]) != NULL)
		i++;
	size = ft_strlen(&s1[i]);
	if (size != 0)
		while (s1[i + size - 1] && ft_strchr(set, s1[i + size - 1]) != NULL)
			size--;
	return (ft_substr(s1, i, size));
}
