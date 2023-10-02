/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouhib <hmouhib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 03:57:00 by hmouhib           #+#    #+#             */
/*   Updated: 2023/10/02 04:52:42 by hmouhib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void    *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    size_t i;
    const unsigned char * _src;
    unsigned char * _dest:

    i = 0;
    _src = (const unsigned char *)src;
    _dest = (unsigned char *)dest;
    while (i < n && _src[i] != c)
    {
        _dest[i] = _src[i];
        i += sizeof(_dest[i]);
    }
    return (dest);
}