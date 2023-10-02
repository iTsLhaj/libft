/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouhib <hmouhib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 03:54:28 by hmouhib           #+#    #+#             */
/*   Updated: 2023/10/02 04:57:20 by hmouhib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char   *_dest;
    unsigned char   *_src;
    size_t          i;

    i = 0;
    _src = (unsigned char *)src;
    _dest = (unsigned char *)dest;
    while (i < n)
    {
        _dest[i] = _src[i];
        i += sizeof(_dest[i]);
    }
    return (dest);
}