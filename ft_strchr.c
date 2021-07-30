#include<stdio.h>
char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			printf("%s", &s[i]);
		}
	}
	return (0);
}

int	main(void)
{
	const char s[] = "http://www.google.com";
	const char c = 'g';

	printf("%c", *ft_strchr(s, c));
}	
