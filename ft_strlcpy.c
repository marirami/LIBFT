/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirami <marirami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 17:03:26 by marirami          #+#    #+#             */
/*   Updated: 2022/12/27 16:35:09 by marirami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t len)
{
	size_t			x;
	unsigned int	count;

	x = 0;
	count = ft_strlen(src);
	if (!len)
		return (count);
	while (src[x] != '\0' && x < len - 1)
	{
		dst[x] = src[x];
		x++;
	}
	dst[x] = '\0';
	return (count);
}
/*#include <stdio.h>
int main()
{
    char        dst[10] = "Helloo";
    const char  src[10]  = "Blue";
    
   printf("Before strlcpy dst = %s, src = %s\n", dst, src);
   
   ft_strlcpy(dst, src, 4);
   
   printf("After strlcpy dst = %s, src = %s\n", dst, src);
   return (0);
}*/