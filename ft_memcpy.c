/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-silv <rda-silv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 20:36:08 by rda-silv          #+#    #+#             */
/*   Updated: 2021/09/01 20:28:14 by rda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dt, const void *sr, size_t n)
{
	size_t	i;

	if (!dt && !sr)
		return (0);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dt)[i] = ((unsigned char *)sr)[i];
		i++;
	}
	return (dt);
}
