/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirami <marirami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 10:54:04 by marirami          #+#    #+#             */
/*   Updated: 2023/03/06 16:48:12 by marirami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ret;
	char	*str;
	size_t	length_str;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	str = (char *)s + start;
	length_str = ft_strlen(str);
	if (length_str < len)
		len = length_str + 1;
	else
		len = len + 1;
	ret = malloc(sizeof(char) * len);
	if (ret == NULL)
		return (NULL);
	ft_strlcpy(ret, str, len);
	return (ret);
}
