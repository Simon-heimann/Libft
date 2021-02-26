/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sheimann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 19:57:03 by sheimann          #+#    #+#             */
/*   Updated: 2021/02/10 19:57:05 by sheimann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_putnbr_fd(int n, int fd)
{
	long int	mem;
	long int	nb;

	nb = n;
	if (!fd)
		return ;
	if (nb < 0)
	{
		nb *= -1;
		write(fd, "-", 1);
	}
	mem = 0;
	if (nb >= 10)
	{
		ft_putnbr_fd(nb / 10, fd);
	}
	mem = nb % 10 + '0';
	write(fd, &mem, 1);
}
