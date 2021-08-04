/* ************************************************************************** */
/*                                                                            */
/*                                                         :::      ::::::::  */
/*  ft_strncmp.c                                         :+:      :+:    :+:  */
/*                                                     +:+ +:+         +:+    */
/*  By: rda-silv <rda-silv@student.42sp.org.br>      +#+  +:+       +#+       */
/*                                                 +#+#+#+#+#+   +#+          */
/*  Created: 2021/08/02 22:47:26 by rda-silv            #+#    #+#            */
/*  Updated: 2021/08/03 21:02:08 by rda-silv           ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	if (n == 0)
		return (0);
	i = 0;
	while ((s1[i] == s2[i]) && s1[i] != '0')
	{
		if (i < (n - 1)
			i++;
		else
			return (0);
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

