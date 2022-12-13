/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirami <marirami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 17:03:26 by marirami          #+#    #+#             */
/*   Updated: 2022/12/06 14:45:03 by marirami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t			x;
	unsigned int	count;

	x = 0;
	count = ft_strlen(src);
	if (!n)
		return (count);
	while (src[x] != '\0' && x < n - 1)
	{
		dst[x] = src[x];
		x++;
	}
	dst[x] = '\0';
	return (count);
}
/*
#include <stdio.h>
int main()
{
    char        dst[10] = "Hello";
    const char  src[10]  = "Blue";
    
   printf("Before strlcpy dst = %s, src = %s\n", dst, src);
   ft_strlcpy(dst, src, 5);
   printf("After strlcpy dst = %s, src = %s\n", dst, src);
   return (0);
}
*/
