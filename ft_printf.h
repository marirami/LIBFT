/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirami <marirami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 12:30:55 by marirami          #+#    #+#             */
/*   Updated: 2023/02/13 15:06:48 by marirami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_putnb(int n);
int	ft_putde(unsigned int c);
int	ft_puthexa(size_t nb, char format);
int	ft_conversions(char format, va_list args);
int	ft_printf(char const *s, ...);

#endif
