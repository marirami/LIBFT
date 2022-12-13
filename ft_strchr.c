/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirami <marirami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 15:44:28 by marirami          #+#    #+#             */
/*   Updated: 2022/12/12 17:56:42 by marirami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char) c)
		{
			return ((char *)s);
		}
		s++;
	}
	if (*s == (char) c)
	{
		return ((char *)s);
	}
	return (0);
}
/*
#include <stdio.h>
int main () 
{
   const char s[] = "http://www.tutorialspoint.com";
   const char c = '/';
   char *ret;

   ret = strchr(s, c);
   
   printf("String after |%c| is - |%s|\n", c, ret);
   
   return (0);
}
*/