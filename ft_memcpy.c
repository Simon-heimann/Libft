/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sheimann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 19:56:15 by sheimann          #+#    #+#             */
/*   Updated: 2021/02/10 19:56:16 by sheimann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *dest, const void *src, size_t num)
{
	char	*ndest;
	char	*nsrc;
	size_t	i;

	ndest = (void *)dest;
	nsrc = (void *)src;
	i = 0;
	if (dest == src || num == 0)
		return (dest);
	while (i < num)
	{
		ndest[i] = nsrc[i];
		i++;
	}
	return (ndest);
}
