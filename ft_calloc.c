/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sheimann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 19:53:56 by sheimann          #+#    #+#             */
/*   Updated: 2021/02/10 19:53:57 by sheimann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_calloc(size_t nitems, size_t size)
{
	void	*ptr;

	if (!(ptr = (void *)malloc(nitems * size)))
		return (NULL);
	ft_bzero(ptr, nitems * size);
	return (ptr);
}
