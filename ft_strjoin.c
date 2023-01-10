/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marirami <marirami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 15:19:13 by marirami          #+#    #+#             */
/*   Updated: 2023/01/04 11:40:35 by marirami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char    *str;
    size_t  i;
    
    i = 0;
    int len = ft_strlen(s1) + ft_strlen(s2) + 1;
    str = (char *) malloc (sizeof(char) * len);
    
    if (str == NULL)
    {
        return (NULL);
    }
    while (*s1)
    {
        str[i] = *s1++;
        i++;
    }
    while (*s2)
    {
        str[i] = *s2++;
        i++;
    }
    str[i] = '\0';
    return (str);
}