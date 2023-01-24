/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirami <marirami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 17:44:36 by marirami          #+#    #+#             */
/*   Updated: 2023/01/24 10:45:04 by marirami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dstleng;
	size_t	srcleng;

	srcleng = ft_strlen(src);
	dstleng = ft_strlen(dst);
	j = dstleng;
	i = 0;
	if (dstleng < size - 1 && size > 0)
	{
		while (src[i] && dstleng + i < size - 1)
		{
			dst[j] = src[i];
			j++;
			i++;
		}
		dst[j] = '\0';
	}
	if (dstleng >= size)
		dstleng = size;
	return (dstleng + srcleng);
}
/* #include <stdio.h>
 int main()
{
    char dst[20] = "viaje";
    const char src[20] = "nuevo";
    size_t x;
	
    x = ft_strlcat(dst,src,5);
	
    printf("%zu\n",x);
    printf("Before strlcpy dst = %s, src = %s\n", dst, src);
	
    ft_strlcat(dst, src, 11);
	
    printf("After strlcpy dst = %s, src = %s\n", dst, src);
    return (0);
}
 */