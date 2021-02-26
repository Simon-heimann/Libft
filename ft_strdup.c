/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sheimann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 19:57:35 by sheimann          #+#    #+#             */
/*   Updated: 2021/02/10 19:57:36 by sheimann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *s)
{
	char	*sdup;
	char	*str;
	size_t	size;

	size = ft_strlen(s) + 1;
	str = (char *)malloc(size);
	if (str == NULL)
		return (NULL);
	if (!(sdup = (char *)ft_memcpy(str, s, size)))
	{
		free(str);
		return (NULL);
	}
	return (sdup);
}
