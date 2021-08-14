/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-silv <rda-silv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 0021/07/29 22:48:50 by da-silv           #+#    #+#             */
/*   Updated: 2021/08/14 11:26:04 by rda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>

	int			ft_isalnum(int c);
	int			ft_isalpha(int c);
	int			ft_isascii(int c);
	int			ft_isdigit(int c);
	int			ft_isprint(int c);
	int			ft_memcmp(const void *str1, const void *str2, size_t n);
	void		*ft_memchr(const void *s, int c, size_t n);
	void		*ft_memset(void *str, int c, size_t n);
	void		*ft_memcpy(void *dt, const void *sr, size_t n);
	void		*ft_memmove(void *dest, const void *src, size_t n);
	size_t		ft_strlen(const char *s);
	int			ft_strncmp(const char *s1, const char *s2, size_t n);
	char		*ft_strcat(char *dest, const char *src);
	char		*ft_strchr(const char *s, int c);
	char		*ft_strrchr(const char *s, int c);
	int			ft_toupper(int c);
	int			ft_tolower(int c);

#endif
