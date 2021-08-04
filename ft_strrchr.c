/* ************************************************************************** */
/*                                                                            */
/*                                                         :::      ::::::::  */
/*  ft_strrchr.c                                         :+:      :+:    :+:  */
/*                                                     +:+ +:+         +:+    */
/*  By: rda-silv <rda-silv@student.42sp.org.br>      +#+  +:+       +#+       */
/*                                                 +#+#+#+#+#+   +#+          */
/*  Created: 2021/08/02 22:45:30 by rda-silv            #+#    #+#            */
/*  Updated: 2021/08/03 18:53:53 by rda-silv           ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	while ((s[i] != 0) && (s[i] != (char)c))
		i--;
	if (s[i] == (char)c)
		return ((char *)s + i);
	else
		return (0);
}
