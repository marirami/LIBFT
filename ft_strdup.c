/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirami <marirami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 18:29:17 by marirami          #+#    #+#             */
/*   Updated: 2022/12/22 12:35:19 by marirami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*copy;

	len = strlen(s) + 1;
	copy = malloc(len);
	if (copy != NULL)
	{
		strcpy(copy, s);
	}
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