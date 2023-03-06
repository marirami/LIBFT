/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirami <marirami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 12:18:42 by marirami          #+#    #+#             */
/*   Updated: 2023/02/15 12:26:26 by marirami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnb(int n)
{
	int				i;
	unsigned int	x;

	i = 0;
	if (n < 0)
	{
		i = ft_putchar('-');
		x = n * -1;
	}
	else
		x = n;
	if (x >= 10)
	{
		i = i + ft_putnb(x / 10);
	}
	i = i + ft_putchar(x % 10 + '0');
	return (i);
}

int	ft_putde(unsigned int c)
{
	int	i;

	i = 0;
	if (c >= 10)
	{
		i = i + ft_putde(c / 10);
	}
	i = i + ft_putchar(c % 10 + '0');
	return (i);
}
