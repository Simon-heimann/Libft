/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sheimann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 19:56:55 by sheimann          #+#    #+#             */
/*   Updated: 2021/02/10 19:56:57 by sheimann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putendl_fd(char *s, int fd)
{
	char	newline;

	newline = '\n';
	if (!fd || !s)
		return ;
	write(fd, s, ft_strlen(s));
	write(fd, &newline, 1);
}
