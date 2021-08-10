/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-silv <rda-silv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 19:56:54 by ricajust          #+#    #+#             */
/*   Updated: 2021/08/09 22:31:51 by rda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	*ft_memcmp(const void *str1, const void *str2, size_t n);
void	*ft_memcpy(void *restrict dt, const void *restrict sr, size_t n);

int main () {
   char str1[15];
   char str2[15];
   int ret;

   ft_memcpy(     str1, "abcdef", 6);
   ft_memcpy(     str2, "ABCDEF", 6);

   ret = ft_memcmp(     str1, str2, 5);

   if(ret > 0) {
      printf("str2 is less than str1");
   } else if(ret < 0) {
      printf("str1 is less than str2");
   } else {
      printf("str1 is equal to str2");
   }
   
   return(0);
}
