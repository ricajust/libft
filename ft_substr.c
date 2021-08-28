/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-silv <rda-silv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 20:03:33 by rda-silv          #+#    #+#             */
/*   Updated: 2021/08/28 12:30:21 by rda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	lenstr;
	size_t	i;
	size_t	end;

	if (!s)
		return (NULL);
	lenstr = ft_strlen(s);
	substr = malloc(sizeof(char) * len + 1);
	if (!substr)
		return (NULL);
	i = 0;
	if (start < lenstr)
	{
		end = len + start;
		while ((start < end) && (s[start] != '\0'))
		{
			substr[i] = s[start];
			i++;
			start++;
		}
	}
	substr[i] = '\0';
	return (substr);
}
