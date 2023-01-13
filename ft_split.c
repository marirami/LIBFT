/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirami <marirami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 11:44:39 by marirami          #+#    #+#             */
/*   Updated: 2023/01/13 14:30:50 by marirami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_count_c(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (*s == c && *s)
	{
		s++;
	}
	while (*s)
	{
		i++;
		while (*s && *s != c)
		{
			s++;
		}
		while (*s && *s == c)
		{
			s++;
		}
	}
	return (i);
}

char	*ft_dup(const char *s, size_t start, size_t finish)
{
	char	*dst;
	size_t	i;

	i = 0;
	dst = malloc(sizeof(char) * (finish - start + 1));
	if (!dst)
	{
		return (NULL);
	}
	while (start < finish)
	{
		dst[i++] = s[start++];
	}
	dst[i] = '\0';
	return (dst);
}

void	ft_fill_c(char **dst, const char *s, char c)
{
	size_t	i;
	size_t	position_files;
	size_t	start;

	i = 0;
	position_files = 0;
	start = 0;
	while (s[i])
	{
		while (s[i] != c && s[i])
		{
			i++;
			if (s[i] == c || i == ft_strlen(s))
				dst[position_files++] = ft_dup(s, start, i);
		}
		while (s[i] == c && s[i])
		{
			i++;
			start = i;
		}
	}
	dst[position_files] = (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**str;

	if (!s)
	{
		return (NULL);
	}
	str = (char **)malloc(sizeof(char *) * (ft_count_c(s, c) + 1));
	if (!str)
	{
		return (NULL);
	}
	ft_fill_c(str, s, c);
	return (str);
}
