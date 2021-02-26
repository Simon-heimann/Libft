/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sheimann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 19:53:40 by sheimann          #+#    #+#             */
/*   Updated: 2021/02/10 19:53:43 by sheimann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int				iswhitespace(char ch)
{
	if (ch == ' ' || ch == '\t' || ch == '\n')
		return (1);
	if (ch == '\r' || ch == '\v' || ch == '\f')
		return (1);
	return (0);
}

int						ft_atoi(const char *str)
{
	int					neg;
	int					i;
	unsigned long long	res;

	neg = 1;
	i = 0;
	res = 0;
	while (iswhitespace(str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (str[i] && ft_isdigit(str[i]))
	{
		res = (res * 10) + (str[i++] - 48);
		if (res > LLONG_MAX)
			return (neg == -1 ? 0 : -1);
	}
	return (neg * res);
}
