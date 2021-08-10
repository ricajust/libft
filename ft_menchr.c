#include "libft.h"
#include <stdio.h>

void 	*ft_memchr(const  void *s, int c, size_t n)
{
	unsigned int	i;

	i = 0;
	while (((unsigned char *)s)[i] != c)
		i++;
	if (((unsigned char*)s)[i] == '\0')
		return (NULL);
	else
		return ((unsigned char *)s + i);
}

int	main(void)
{
	char	nome[] = "RICARDO";
	
	printf("\n%p\n\n", ft_memchr(nome, 'C', 7));
	printf("\n%s\n", ft_memchr(nome, 'C', 7));

}
