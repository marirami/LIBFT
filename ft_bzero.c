/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirami <marirami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 17:03:12 by marirami          #+#    #+#             */
/*   Updated: 2022/12/27 13:07:32 by marirami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*st;

	i = 0;
	st = s;
	while (i < n)
	{
		st[i] = 0;
		i++;
	}
}
/* #include <stdio.h>
int main()
{
	char str[] = "Zero";

	printf("Cadena original: %s\n", str);
	ft_bzero(str, 2);
	printf("Cadena después de ft_bzero: %s\n", str);
	return (0);
} */