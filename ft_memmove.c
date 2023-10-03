/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouhib <hmouhib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 04:10:27 by hmouhib           #+#    #+#             */
/*   Updated: 2023/10/03 21:28:34 by hmouhib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char   temp[n];
    unsigned char   *_dest;
    unsigned char   *_src;
    size_t          i;

    i = 0;
    _src = (unsigned char *)src;
    _dest = (unsigned char *)dest;
    while (_src[i])
    {
        temp[i] = _src[i];
        i++;
    }
    i = 0;
    while (i < n)
    {
        _dest[i] = temp[i];
        i++;
    }
    return (dest);
}