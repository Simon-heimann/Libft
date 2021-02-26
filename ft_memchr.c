/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sheimann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 19:55:51 by sheimann          #+#    #+#             */
/*   Updated: 2021/02/10 19:55:53 by sheimann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*res;

	res = (unsigned char *)str;
	while (n)
	{
		if (*res != (unsigned char)c)
			res++;
		else
			return (res);
		n--;
	}
	return (NULL);
}
