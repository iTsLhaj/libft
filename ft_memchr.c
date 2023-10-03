/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouhib <hmouhib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 04:15:00 by hmouhib           #+#    #+#             */
/*   Updated: 2023/10/03 21:41:54 by hmouhib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    unsigned char   *_s;

    i = 0;
    _s = (unsigned char *)s;
    while (i < n)
    {
        if (_s[i] == (unsigned char)c)
            return ((void *)&_s[i]);
        i++;
    }
    return (0);
}