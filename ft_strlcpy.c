/* ************************************************************************* */
/*                                                                           */
/*                                                       :::      ::::::::   */
/*   ft_strlcpy.c                                      :+:      :+:    :+:   */
/*                                                   +:+ +:+         +:+     */
/*   By: rda-silv <rda-silv@student.42sp.org.br>   +#+  +:+       +#+        */
/*                                               +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 17:02:44 by rda-silv         #+#    #+#             */
/*   Updated: 2021/08/14 17:02:46 by rda-silv        ###   ########.fr       */
/*                                                                           */
/* ************************************************************************* */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	sizedest;

	if (!dst && !src)
		return (0);
	sizedest = ft_strlen(src);
	i = 0;
	if (dstsize > 0)
	{
		while (src[i] && i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (sizedest);
}
