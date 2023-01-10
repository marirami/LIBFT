/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirami <marirami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 17:44:57 by marirami          #+#    #+#             */
/*   Updated: 2022/12/19 11:20:52 by marirami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*str;

	i = 0;
	str = s;
	while (i < n)
	{
		if (str[i] == (char)c)
		{
			return ((char *)(str + i));
		}
		i++;
	}
	return (NULL);
}
/* #include <stdio.h>
int main()
{
   const char str[] = "string";
   const char c = 'i';
   char *x;

   x = ft_memchr(str, c, 4);
   
   printf("String after |%c| is - |%s|\n", c, x);
   
   return (0);
}
 */
