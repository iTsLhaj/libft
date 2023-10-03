/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouhib <hmouhib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 04:46:39 by hmouhib           #+#    #+#             */
/*   Updated: 2023/10/03 21:26:04 by hmouhib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char    *ft_strchr(const char *s, int c)
{
    int     i;

    if (s == NULL)
        return (NULL);
    if (c == 0)
    {
        while (*s)
            s++;
        return ((char *)s);
    }
    i = 0;
    while (s[i])
    {
        if (s[i] == c)
            return ((char *)(s + i));
        i++;
    }
    return (NULL);
}