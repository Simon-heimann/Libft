/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sheimann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 19:59:57 by sheimann          #+#    #+#             */
/*   Updated: 2021/02/10 19:59:58 by sheimann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *str, int i)
{
	int		size;

	size = ft_strlen(str);
	if (i > 255)
		i -= 256;
	while (size >= 0)
	{
		if (str[size] == i)
			return ((char *)&str[size]);
		size--;
	}
	return (0);
}
