/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouhib <hmouhib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 03:52:44 by hmouhib           #+#    #+#             */
/*   Updated: 2023/10/02 04:37:27 by hmouhib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void    ft_bzero(void *s, size_t n)
{
    unsigned char   *_s;
    size_t          i;

    i = 0;
    _s = (unsigned char *)s;
    while (i < n)
    {
        _s[i] = 0;
        i += sizeof(s[i]);
    }
}