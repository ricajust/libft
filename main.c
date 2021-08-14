#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c);

int main () {
   int len;
   const char str[] = "Juliana";
   const char ch = 'i';
   char *ret;

   ret = ft_strrchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);
   
   return(0);
}