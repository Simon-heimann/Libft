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
	char	*res;
	size_t	i;

	res = (char *)str;
	i = 0;
	while (size > i)
	{
		res[i] = (char)ch;
		i++;
	}
	return (res);
}
