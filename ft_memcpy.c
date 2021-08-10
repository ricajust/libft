/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-silv <rda-silv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 17:28:30 by ricajust          #+#    #+#             */
/*   Updated: 2021/08/09 22:45:38 by rda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dt, const void *restrict sr, size_t n)
{
	size_t	i;

	i = 0;
	while (i <= n)
	{
		((unsigned char *)dt)[i] = ((unsigned char *)sr)[i];
		i++;
	}
	return (dt);
}
