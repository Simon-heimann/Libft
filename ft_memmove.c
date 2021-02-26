/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sheimann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 19:56:23 by sheimann          #+#    #+#             */
/*   Updated: 2021/02/10 19:56:24 by sheimann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *str1, const void *str2, size_t num)
{
	char	*dest;
	char	*src;
	size_t	i;

	if (!str1 && !str2)
		return (NULL);
	dest = (char*)str1;
	src = (char*)str2;
	i = 0;
	if (src < dest)
	{
		while (num--)
			*(dest + num) = *(src + num);
	}
	else
	{
		while (i < num)
		{
			*(dest + i) = *(src + i);
			i++;
		}
	}
	return (str1);
}
