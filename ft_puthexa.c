/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirami <marirami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 14:22:59 by marirami          #+#    #+#             */
/*   Updated: 2023/02/15 12:18:59 by marirami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa(size_t nb, char format)
{
	int	i;

	i = 0;
	if (format == 'x' || format == 'p')
	{
		if (nb >= 16)
		{
			i = i + ft_puthexa(nb / 16, format);
		}
		i = i + ft_putchar("0123456789abcdef"[nb % 16]);
	}
	else if (format == 'X')
	{
		if (nb >= 16)
		{
			i = i + ft_puthexa(nb / 16, format);
		}
		i = i + ft_putchar("0123456789ABCDEF"[nb % 16]);
	}
	return (i);
}
