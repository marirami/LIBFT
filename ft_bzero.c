/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirami <marirami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 17:03:12 by marirami          #+#    #+#             */
/*   Updated: 2022/12/13 12:04:21 by marirami         ###   ########.fr       */
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
		++i;
	}
}
/*
#include <stdio.h>

int main()
{
    char s [20];
    strcpy(s, "cascada");
    puts(s);

    ft_bzero(s, 3);
    puts(s);
}
*/