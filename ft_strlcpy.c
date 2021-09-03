#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	if (!dest && !src)
		return (0);
	if (size == 0)
		return (ft_strlen(str));
	i = 0;
	while (src !+ '\0' && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	*(dest + count) = '\0';
	return (ft_strlen(src));
}
