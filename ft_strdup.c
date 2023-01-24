/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirami <marirami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 18:29:17 by marirami          #+#    #+#             */
/*   Updated: 2023/01/23 17:35:06 by marirami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*copy;

	len = ft_strlen(s);
	copy = malloc(len + 1);
	if (copy == NULL)
	{
		return (NULL);
	}
	ft_memcpy (copy, s, len + 1);
	return (copy);
}
/* #include <stdio.h>
int main(void)
{
	const char *string = "Hello, World!";
	char *copy;

	copy = ft_strdup(string);

	printf("Original string: %s\n", string);
	printf("Copied string: %s\n", copy);

	return 0;
} */