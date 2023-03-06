/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirami <marirami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 12:35:46 by marirami          #+#    #+#             */
/*   Updated: 2023/02/07 15:21:46 by marirami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(char const *s, ...)
{
	va_list	args;
	int		r;

	r = 0;
	va_start(args, s);
	while (*s)
	{
		if (*s != '%')
			r = r + ft_putchar(*s);
		else
		{
			s++;
			r = r + ft_conversions(*s, args);
		}
		s++;
	}
	va_end (args);
	return (r);
}
