/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sheimann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 19:55:39 by sheimann          #+#    #+#             */
/*   Updated: 2021/02/10 19:55:41 by sheimann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memccpy(void *dest, const void *src, int c, size_t num)
{
	char	*ndest;
	char	*nsrc;
	size_t	ind;

	ndest = (char *)dest;
	nsrc = (char *)src;
	ind = 0;
	if (num == 0)
		return (NULL);
	if (dest == src)
		return (dest);
	while (ind < num)
	{
		ndest[ind] = nsrc[ind];
		if (nsrc[ind] == (char)c)
			return ((void*)&ndest[ind + 1]);
		ind++;
	}
	return (NULL);
}
