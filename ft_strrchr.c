/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-silv <rda-silv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 20:36:55 by rda-silv          #+#    #+#             */
/*   Updated: 2021/08/14 13:39:40 by rda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	printf("\nTamanho da bagaca: %d\n\n", i);
	while (i > 0)
	{
		printf("\nCaracter da string x entrada: %c - %c\n\n", s[i], c);
		if (s[i] == (unsigned char)c)
			return ((char *)s + i);
		i--;
	}
	if (c == '\0')
		return ((char *)s + i);
	return (NULL);
}
