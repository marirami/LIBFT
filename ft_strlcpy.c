/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirami <marirami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 17:03:26 by marirami          #+#    #+#             */
/*   Updated: 2023/01/24 10:41:12 by marirami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t len)
{
	size_t			x;
	unsigned int	len_src;

	x = 0;
	len_src = ft_strlen(src);
	if (!len)
		return (len_src);
	while (src[x] != '\0' && x < len - 1)
	{
		dst[x] = src[x];
		x++;
	}
	dst[x] = '\0';
	return (len_src);
}
