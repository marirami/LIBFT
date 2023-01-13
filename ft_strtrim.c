/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirami <marirami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 12:48:34 by marirami          #+#    #+#             */
/*   Updated: 2023/01/11 11:35:27 by marirami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	i;
	size_t			x;

	if (ft_strlen(s1) == 0)
	{
		return (ft_strdup(""));
	}
	if (ft_strlen(set) == 0)
	{
		return (ft_strdup(s1));
	}
	i = 0;
	while (s1[i] != '\0' && ft_strchr(set, s1[i]) != NULL)
	{
		i++;
	}
	x = ft_strlen(s1);
	while (x >= 0 && ft_strchr(set, s1[x]) != NULL)
	{
		x--;
	}
	return (ft_substr(s1, i, x - i + 1));
}
