/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirami <marirami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 11:58:46 by marirami          #+#    #+#             */
/*   Updated: 2022/12/28 16:27:37 by marirami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	count;

	count = 0;
	if (n == 0)
		return (0);
	while (str1[count] && str1[count] == str2[count] && n - 1 > count)
	{
		count++;
	}
	return ((unsigned char)str1[count] - (unsigned char)str2[count]);
}
/*  #include <stdio.h>
int main(void)
{
    printf("%d", ft_strncmp("Hola", "Mundoo", 2));
}
 */