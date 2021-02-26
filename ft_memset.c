/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sheimann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 19:56:29 by sheimann          #+#    #+#             */
/*   Updated: 2021/02/10 19:56:30 by sheimann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memset(void *str, int ch, size_t size)
{
	char	*dst;
	size_t	i;

	dst = (char *)str;
	i = 0;
	while (size > i)
	{
		dst[i] = (char)ch;
		i++;
	}
	return (dst);
}
