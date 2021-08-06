/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricajust <ricajust@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 19:19:44 by ricajust          #+#    #+#             */
/*   Updated: 2021/08/05 21:48:03 by ricajust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while ((s[i] != '\0') && (s[i] != c))
		i++;
	if ((char)c == s[i])
		return ((char *)s + i);
	else
		return (0);
}
