#include "libft.c"

char	*strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while ((s[i] != '\0') && (s[i] != c))
		i++;
	if ((char)c == s[i])
		return ((char *)s + i);
	else
		return (0);
}
