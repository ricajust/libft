/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-silv <rda-silv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 0021/07/29 22:48:50 by da-silv           #+#    #+#             */
/*   Updated: 2021/08/24 21:25:42 by rda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>

/**
 * @brief Thefunction void *ft_memset(void *str, int c, size_t n) 
 * copies the character c (an unsigned char) to the first n characters of the 
 * string pointed to, by the argument str.
 * @param str This is a pointer to the block of memory to fill.
 * @param c This is the value to be set. The value is passed as an int, but 
 * the function fills the block of memory using the unsigned char conversion of
 *  this value.
 * @param n This is the number of bytes to be set to the value.
 * @return This function returns a pointer to the memory area str.
 */
void	*ft_memset(void *str, int c, size_t n);

/**
 * @brief The ft_bzero() function erases the data in the n bytes of the memory
 * starting at the location pointed to by s, by writing zeros (bytes
 * containing '\0') to that area.
 * @param s void pointer s
 * @param n size_t n numbers
 * @return None
 */
void	ft_bzero(void *s, size_t n);

/**
 * @brief The function void *ft_memcpy(void *dt, const void *sr, 
 * size_t n) copies n characters from memory area sr to memory area dt.
 * @param dt This is pointer to the destination array where the content is 
 * to be copied, type-casted to a pointer of type void*.
 * @param sr This is pointer to the source of data to be copied, type-casted
 *  to a pointer of type void*.
 * @param n This is the number of bytes to be copied.
 * @return This function returns a pointer to destination, which is str1
 */
void	*ft_memcpy(void *dt, const void *sr, size_t n);

/**
 * @brief The ft_memccpy function copies 0 or more characters of src to dest, 
 * halting when the character c has been copied or when count characters have 
 * been copied, whichever comes first.
 * @param dest Pointer to the destination.
 * @param src Pointer to the source.
 * @param c Last character to copy.
 * @param n Number of characters.
 * @return If the character c is copied, ft_memccpy returns a pointer to the 
 * char in dest that immediately follows the character. If c is not copied, it 
 * returns NULL.
 */
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);

/**
 * @brief The function void *ft_memmove(void *str1, const void *str2, 
 * size_t n) copies n characters from str2 to str1, but for overlapping memory 
 * blocks, ft_memmove() is a safer approach than memcpy().
 * @param str1 This is a pointer to the destination array where the content is 
 * to be copied, type-casted to a pointer of type void*.
 * @param str2 This is a pointer to the source of data to be copied, 
 * type-casted to a pointer of type void*.
 * @param n − This is the number of bytes to be copied.
 * @return This function returns a pointer to the destination, which is str1.
 */
void			*ft_memmove(void *dest, const void *src, size_t n);

/**
 * @brief The function void *ft_memchr(const void *s, int c, size_t n) searches
 *  for the first occurrence of the character c (an unsigned char) in the first
 *  n bytes of the string pointed to, by the argument str.
 * @param str This is the pointer to the block of memory where the search is 
 * performed.
 * @param c This is the value to be passed as an int, but the function performs
 *  a byte per byte search using the unsigned char conversion of this value.
 * @param n This is the number of bytes to be analyzed.
 * @return This function returns a pointer to the matching byte or NULL if the 
 * character does not occur in the given memory area.
 */
void			*ft_memchr(const void *s, int c, size_t n);

/**
 * @brief The function int ft_memcmp(const void *str1, const void *str2, 
 * size_t n)) compares the first n bytes of memory area str1 and memory area 
 * str2
 * @param str1 This is the pointer to a block of memory.
 * @param str2 This is the pointer to a block of memory.
 * @param n This is the number of bytes to be compared.
 * @return if Return value < 0 then it indicates str1 is less than str2.\n
 * if Return value > 0 then it indicates str2 is less than str1.\n
 * if Return value = 0 then it indicates str1 is equal to str2.
 */
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
size_t			ft_strlcat(char *dst, const char *src, size_t size);
/**
 * @brief The C library function char *ft_strchr(const char *s, int c) searches for 
 * the first occurrence of the character c (an unsigned char) in the string 
 * pointed to by the argument str.
 * @param s - This is the C string to be scanned
 * @param c  This is the character to be searched in str.
 * @return This returns a pointer to the first occurrence of the character c 
 * in the string str, or NULL if the character is not found.
 */
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
char			*ft_strdup(const char *str);
char	*ft_substr(char const *s, unsigned int start, size_t len);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putchar_fd(char c, int fd);

#endif
