/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirami <marirami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 17:03:12 by marirami          #+#    #+#             */
/*   Updated: 2023/01/23 17:11:20 by marirami         ###   ########.fr       */
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

/* int main()
{
	char str[] = "Zero";

	printf("Cadena original: %s\n", str);
	ft_bzero(str, 1);
	printf("Cadena después de ft_bzero: %s\n", str);
	return (0);
} */