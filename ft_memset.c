/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirami <marirami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 12:27:56 by marirami          #+#    #+#             */
/*   Updated: 2022/12/06 14:30:02 by marirami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;
	char	*st;

	st = str;
	i = 0;
	while (i < n)
	{
		st[i] = c;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int main()
{
	char str[50];

	strcpy(str, "Hello World");
	puts(str);

	ft_memset(str, '$', 5);
	puts(str);
	return(0);
}
*/
