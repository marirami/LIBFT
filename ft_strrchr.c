/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirami <marirami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 18:06:18 by marirami          #+#    #+#             */
/*   Updated: 2022/12/13 15:40:07 by marirami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;
	
	i = 0; 
	while(s[i])
	{
		i++;
	}
	while(i >= 0)
	{
		if (s[i] == (char)c)
		{
			return ((char *)(s + i));
		}
		i--;
	}
	return (NULL);
}

#include <stdio.h>
int main () 
{
   const char s[] = "http://www.tutorialspoint.com";
   const char c = '.';
   char *ret;

   ret = ft_strrchr(s, c);

   printf("String after |%c| is - |%s|\n", c, ret);
   
   return(0);
}
