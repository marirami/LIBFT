/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirami <marirami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 15:29:34 by marirami          #+#    #+#             */
/*   Updated: 2023/03/06 16:47:59 by marirami         ###   ########.fr       */
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
