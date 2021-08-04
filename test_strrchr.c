/* ************************************************************************** */
/*                                                                            */
/*                                                         :::      ::::::::  */
/*  test_strrchr.c                                       :+:      :+:    :+:  */
/*                                                     +:+ +:+         +:+    */
/*  By: rda-silv <rda-silv@student.42sp.org.br>      +#+  +:+       +#+       */
/*                                                 +#+#+#+#+#+   +#+          */
/*  Created: 2021/08/02 22:23:56 by rda-silv            #+#    #+#            */
/*  Updated: 2021/08/02 22:27:32 by rda-silv           ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c);

int	main(void)
{
	const char	s[] = "juliana";
	int	c = 'a';

	printf("ft_strrchr: %s\n", ft_strrchr(*s, c));
	printf("strrchr: %s\n", strrchr(*s, c));
}
