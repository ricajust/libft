/* ************************************************************************** */
/*                                                                            */
/*                                                         :::      ::::::::  */
/*  ft_isalnum.c                                         :+:      :+:    :+:  */
/*                                                     +:+ +:+         +:+    */
/*  By: rda-silv <rda-silv@student.42sp.org.br>      +#+  +:+       +#+       */
/*                                                 +#+#+#+#+#+   +#+          */
/*  Created: 2021/07/29 23:39:38 by rda-silv            #+#    #+#            */
/*  Updated: 2021/07/29 23:44:10 by rda-silv           ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z') 
		|| (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
