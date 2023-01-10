/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirami <marirami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 16:20:26 by marirami          #+#    #+#             */
/*   Updated: 2023/01/04 18:01:14 by marirami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *result;
    size_t pos;
    
    if (!s || !f)
    {
        return (NULL);
    }
    result = (char *)malloc(sizeof(char) * (strlen(s) + 1));
    if (!result)
    {
        return (NULL);
    }
    pos = 0;
    while (s[pos])
    {
        result[pos] = f(pos, s[pos]);
        pos++;
    }
    result[pos] = '\0';
    return result;
    }
    
#include <stdio.h>
#include <stdlib.h>
char to_upper(unsigned int i, char c) 
{
    i = 0;
    return toupper(c);
}
int main() 
{
    char *s = "hola mundo";
    char *result = ft_strmapi(s, to_upper);
    printf("%s\n", result);
    free(result);
    return (0);
}