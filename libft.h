/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricajust <ricajust@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 0021/07/29 22:48:50 by da-silv           #+#    #+#             */
/*   Updated: 2021/08/05 21:49:35 by ricajust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>

	int	ft_isalnum(int c);
	int	ft_isalpha(int c);
	int	ft_isascii(int c);
	int	ft_isdigit(int c);
	int	ft_isprint(int c);
	char	*ft_strcat(char *dest, const char *src);
	char	*ft_strchr(const char *s, int c);
	size_t	ft_strlen(const char *s);
	int	ft_strncmp(const char *s1, const char *s2, size_t n);
	char	*ft_strrchr(const char *s, int c);
	int	ft_toupper(int c);
	int	ft_toupper(int c);

#endif
