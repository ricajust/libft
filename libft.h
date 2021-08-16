/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-silv <rda-silv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 0021/07/29 22:48:50 by da-silv           #+#    #+#             */
/*   Updated: 2021/08/15 23:11:02 by rda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>

void			*ft_memset(void *str, int c, size_t n);
/**
 * @brief The bzero() function erases the data in the n bytes of the memory
 * starting at the location pointed to by s, by writing zeros (bytes
 * containing '\0') to that area.
 * @param s void pointer s
 * @param n size_t n numbers
 * 
 * @return None
 */
void			ft_bzero(void *s, size_t n);
void			*ft_memcpy(void *dt, const void *sr, size_t n);
void			*ft_memccpy(void *dest, const void *src, int c, size_t n);
void			*ft_memmove(void *dest, const void *src, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *str1, const void *str2, size_t n);
size_t			ft_strlen(const char *s);
size_t			ft_strlcpy(char *dst, const char *src, size_t dstsize);
/**
 * @brief Append one string onto the end of the other with argument sets the 
 * length of the destination string, effectively equal to its buffer size.
 * @param dst - string destination
 * @param src - string source
 * @param size - buffer size
 */
size_t 			ft_strlcat(char *dst, const char *src, size_t size);
char			*ft_strchr(const char *s, int c);
/**
 * @brief description
 * 
 * @param s string original
 * @param c character 
 * 
 * @return char* - pointer for first occurrencyvivo
 */
char			*ft_strrchr(const char *s, int c);

/**
 * @brief The strnstr function finds the first occurrence of the 
 * null-terminated string little in the large string, where the number of 
 * characters to be searched for is determined in len. Characters that appear 
 * after a '\\ 0' character are not searched.
 * 
 * @param big pointer char constant of string
 * @param little pointer char constant of string
 * @param len size_t of characters are searched
 * 
 * @return If little is an empty string, big is returned; if little occurs 
 * nowhere in big, NULL is returned; otherwise a pointer to the first character
 *  of the first occurrence of little is returned.
 */
char			*ft_strnstr(const char *big, const char *little, size_t len);
int				ft_strncmp(const char *s1, const char *s2, size_t n);

/**
 * @brief The function int atoi(const char *str) in the C library changes the 
 * string argument str to an integer. Generally, the function converts a string
 * argument to an integer. The atoi() function skips all the white space 
 * characters at the starting of the string. It also converts the characters as
 * the number part and stops when it finds the first non-number character.
 * @param str void pointer s
 * 
 * @return On success, the function returns the converted integral number as an
 *  int value. If the converted value would be out of the range of 
 * representable values by an int, it causes undefined behavior.
 */
int				ft_atoi(const char *str);
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
int				ft_toupper(int c);
int				ft_tolower(int c);
void			*ft_calloc(size_t nmemb, size_t size);
char			*ft_strdup(const char *s);

#endif
