/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirami <marirami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 14:54:29 by marirami          #+#    #+#             */
/*   Updated: 2023/02/07 15:19:44 by marirami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_conversions(char format, va_list args)
{
	int	i;

	i = 0;
	if (format == 'c')
		i = ft_putchar(va_arg(args, int));
	else if (format == 's')
		i = ft_putstr(va_arg(args, char *));
	else if (format == 'p')
		i = ft_putstr("0x") + ft_puthexa(va_arg(args, size_t), format);
	else if (format == 'd' || format == 'i')
		i = ft_putnb(va_arg(args, int));
	else if (format == 'u')
		i = ft_putde(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		i = ft_puthexa(va_arg(args, unsigned int), format);
	else if (format == '%')
		i = ft_putchar('%');
	return (i);
}
