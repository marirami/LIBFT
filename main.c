/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirami <marirami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 16:25:14 by marirami          #+#    #+#             */
/*   Updated: 2023/02/13 13:08:12 by marirami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	ft_printf("%c\n", 'b');
	ft_printf("%s\n", "helloo");
	ft_printf("%p\n", "Hello");
	ft_printf("%p\n", (void *)0);
	ft_printf("%d\n", 2147483647);
	ft_printf("%d\n", -2147483648);
	ft_printf("%i\n", 485);
	ft_printf("%u\n", -123);
	ft_printf("%x\n", 12311231992);
	ft_printf("%X\n", 1231312443);
	ft_printf("%%\n");
	printf("%c\n", 'b');
	printf("%s\n", "helloo");
	printf("%p\n", "Hello");
	printf("%p\n", (void *)0);
	printf("%d\n", 2147483647);
	printf("%d\n", -2147648);
	printf("%i\n", 485);
	printf("%u\n", -123);
	printf("%x\n", 123112319);
	printf("%X\n", 1231312443);
	printf("%%\n");
}
