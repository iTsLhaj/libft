/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouhib <hmouhib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 04:10:27 by hmouhib           #+#    #+#             */
/*   Updated: 2023/10/02 02:15:14 by hmouhib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include <string.h>

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    void    temp[];
    size_t  i;

    i = 0;
    while (src[i])
    {
        temp[i] = src[i];
        i += sizeof(src[i]);
    }
    i = 0;
    while (i < n)
    {
        dest[i] = temp[i];
        i += sizeof(temp[i]);
    }
    return (dest);
}