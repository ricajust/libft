/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-silv <rda-silv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 23:03:31 by rda-silv          #+#    #+#             */
/*   Updated: 2021/08/22 10:28:59 by rda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_checkspace(char c)
{
	if (c == ' ' || c == '\n' || c == '\t' || c == '\v' || c == '\r'
		|| c == '\f')
		return (1);
	return (0);
}

int	ft_checksignal(char c)
{
	if (c == '+' || c == '-')
	{
		if (c == '-')
			return (-1);
	}
	return (0);
}

int	ft_checknumber(const char *c, int i)
{
	int		number;

	number = 0;
	while (ft_isdigit(c[i]))
	{
		number *= 10;
		number += (c[i] - 48);
		i++;
	}
	return (number);
}

int	ft_atoi(const char *str)
{
	size_t			i;
	unsigned int	number;
	int				signal;

	i = 0;
	number = 0;
	while (ft_checkspace(str[i]))
		i++;
	signal = ft_checksignal(str[i]);
	if (signal)
		i++;
	number = ft_checknumber(str, i);
	if (number)
	{
		if (signal == -1)
			return (number * signal);
		else
			return (number);
	}
	else
		return (0);
}
