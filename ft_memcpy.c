/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirami <marirami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 11:46:50 by marirami          #+#    #+#             */
/*   Updated: 2022/12/27 14:57:04 by marirami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*dest;
	char const	*sr;

	i = 0;
	dest = dst;
	sr = src;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		dest[i] = sr[i];
		i++;
	}
	return (dest);
}
/* #include <stdio.h>
int main()
{
   const char src[50] = "adios";
   char dest[50];
   
   strcpy(dest,"Holaa!!");
   printf("Before ft_memcpy dest = %s\n", dest);
   ft_memcpy(dest, src, strlen(src)+1);
   printf("After ft_memcpy dest = %s\n", dest);
   return(0);
}
 */