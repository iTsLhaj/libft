/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouhib <hmouhib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 04:20:44 by hmouhib           #+#    #+#             */
/*   Updated: 2023/10/02 03:43:27 by hmouhib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void    *ft_memcmp(void *dest, const void *src, size_t n)
{
    size_t i;

    i = 0;
    while (dest[i] && src[i] && i < n)
    {
        if (dest[i] != src[i])
            return (dest[i] - src[i]);
        i += sizeof(src[i]);
    }
    return (dest[i] - src[i]);
}