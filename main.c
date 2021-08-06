/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricajust <ricajust@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 19:56:54 by ricajust          #+#    #+#             */
/*   Updated: 2021/08/05 22:49:48 by ricajust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	unsigned char	*address;
	char			little[3] = "car";
	char			big[7] = "Ricardo";

	address = ft_strnstr(big, little, 4);
	//printf("Variable content: %s\n", address);
	// printf("Variable address: %d\n", *address);
}
