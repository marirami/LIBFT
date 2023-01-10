/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirami <marirami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 15:29:34 by marirami          #+#    #+#             */
/*   Updated: 2023/01/03 10:48:15 by marirami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *large, const char *small, size_t len)
{
	size_t	i;

	if (!*small)
	{
		return ((char *)large);
	}
	while (*large && len--)
	{
		i = 0;
		while (large[i] == small[i])
		{
			if (!small[++i])
			{
				return ((char *)large);
			}
			if (i > len)
			{
				return (0);
			}
		}
		large++;
	}
	return (0);
}
/* #include <stdio.h>
int main ()
{
    const char large[50] = "string";
    const char small[20] = "i";
    char *result;

    result = ft_strnstr(large, small, 4);
    printf("The substring is: %s\n", result);
} */