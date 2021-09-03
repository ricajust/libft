/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-silv <rda-silv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 21:23:31 by rda-silv          #+#    #+#             */
/*   Updated: 2021/09/02 21:25:00 by rda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	if (!dest && !src)
		return (0);
	if (size == 0)
		return (ft_strlen(src));
	i = 0;
	while ((src[i] != '\0') && (i < (size - 1)))
	{
		dest[i] = src[i];
		i++;
	}
	*(dest + i) = '\0';
	return (ft_strlen(src));
}
