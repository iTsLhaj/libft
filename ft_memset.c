/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouhib <hmouhib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 03:41:45 by hmouhib           #+#    #+#             */
/*   Updated: 2023/10/02 04:59:08 by hmouhib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void    *ft_memset(void *s, int c, size_t n)
{
    unsigned char   *_s;
    size_t          i;

    i = 0;
    _s = (unsigned char *)s;
    while (i < n)
    {
        _s[i] = c;
        i += sizeof(_s[i]);
    }
    return (s);
}