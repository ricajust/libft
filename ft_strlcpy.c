/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-silv <rda-silv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 11:23:09 by rda-silv          #+#    #+#             */
/*   Updated: 2021/09/02 21:06:31 by rda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	sizedest;

	if (!src)
		return (0);
	sizedest = ft_strlen(src);
	if (dstsize)
	{
		while (*src && --dstsize)
			*(dst++) = *(src++);
		*dst = '\0';
	}
	return (sizedest);
}
