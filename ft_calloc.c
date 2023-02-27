/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirami <marirami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 13:13:13 by marirami          #+#    #+#             */
/*   Updated: 2022/12/29 12:02:19 by marirami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	ft_memset(ptr, 0, count * size);
	return (ptr);
}
/*#include <stdio.h>
int main(void)
{
	int *array;
	
	array = (int *)ft_calloc(10, sizeof(int));
	if (array == NULL)
	{
		printf("Error allocating memory\n");
		return (1);
	}
	
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");
	
	free(array);
	return (0);
}*/
