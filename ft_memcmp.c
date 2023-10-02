/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouhib <hmouhib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 04:20:44 by hmouhib           #+#    #+#             */
/*   Updated: 2023/10/02 05:05:32 by hmouhib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int ft_memcmp(void *dest, const void *src, size_t n)
{
    unsigned char       *_dest;
    const unsigned char *_src;
    size_t              i;

    i = 0;
    _dest = (unsigned char *)dest;
    _src = (const unsigned char *)src;
    while (_dest[i] && _src[i] && i < n)
    {
        if (_dest[i] != _src[i])
            return (_dest[i] - _src[i]);
        i += sizeof(_src[i]);
    }
    return (_dest[i] - _src[i]);
}