/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirami <marirami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 16:20:26 by marirami          #+#    #+#             */
/*   Updated: 2023/01/24 10:46:16 by marirami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*result;
	size_t	pos;

	if (!s || !f)
	{
		return (NULL);
	}
	result = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!result)
	{
		return (NULL);
	}
	pos = 0;
	while (s[pos])
	{
		result[pos] = f(pos, s[pos]);
		pos++;
	}
	result[pos] = '\0';
	return (result);
}
