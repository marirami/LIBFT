/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirami <marirami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 12:01:25 by marirami          #+#    #+#             */
/*   Updated: 2023/01/24 10:44:35 by marirami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	int			count;
	char		*dest;

	dest = dst;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (dst > src)
	{
		count = (int)n - 1;
		while (count >= 0)
		{
			dest[count] = ((char *)src)[count];
			count--;
		}
	}
	else
	{
		count = 0;
		while (count < (int)n)
		{
			dest[count] = ((char *)src)[count];
			count++;
		}
	}
	return (dst);
}
/* #include <stdio.h>
int main ()
{
    char        dest[10] = "Helloo";
    const char  sr[10]  = "Blue";
    
   printf("Before memmove dest = %s, src = %s\n", dest, sr);
   ft_memmove(dest, sr, 3);
   printf("After memmove dest = %s, src = %s\n", dest, sr);
   return(0);
} */