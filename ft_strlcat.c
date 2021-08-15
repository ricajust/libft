/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-silv <rda-silv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 14:38:00 by rda-silv          #+#    #+#             */
/*   Updated: 2021/08/14 18:34:05 by rda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * dest = "123" | src = "456" | size = 7
 * dest = "123456" | return 6
 * 
 * dest = "123" | src = "456" | size = 5
 * dest = "1234" | return 6
 * 
 * dest = "123" | src = "456" | size = 10
 * dest = "123456" | return 6
 * 
 * dest = "1234" | src = "567" | size = 2
 * dest = "1234" | return 5
 */
size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	sizedest;
	size_t	i;

	sizedest = ft_strlen(dest);//3
	i = 0;
	while ((src[i] != '\0') && (i < size))
	{
		dest[sizedest] = src[i];// 123+4+5+6
		sizedest++;//6
		i++;//3
	}
	dest[sizedest] = '\0';// 123+4+5+6+0
	return (sizedest);
}
