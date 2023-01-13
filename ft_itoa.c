/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirami <marirami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 16:31:07 by marirami          #+#    #+#             */
/*   Updated: 2023/01/10 18:59:22 by marirami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_count(long n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		n = n * -1;
		i++;
	}
	while (n >= 1)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_conver_n(char *nb, long n, unsigned int result)
{
	if (n == 0)
	{
		nb[0] = '0';
		return (nb);
	}
	if (n < 0)
	{
		n = n * -1;
	}
	while (result--)
	{
		nb[result] = (n % 10) + '0';
		n = n / 10;
	}
	if (nb[0] == '0')
	{
		nb[0] = '-';
	}
	return (nb);
}

char	*ft_itoa(int n)
{
	char			*nb;
	unsigned int	result;

	result = ft_count(n);
	nb = ft_calloc(result + 1, sizeof(char));
	if (nb)
	{
		nb = ft_conver_n(nb, n, result);
	}
	return (nb);
}
