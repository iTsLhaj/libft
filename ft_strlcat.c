/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouhib <hmouhib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 04:42:31 by hmouhib           #+#    #+#             */
/*   Updated: 2023/10/02 05:00:26 by hmouhib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t  ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t dest_len;
    size_t src_len;
    size_t res;
    size_t i;

    i = 0;
    res = 0;
    src_len = ft_strlen(src);
    dest_len = ft_strlen(dest);
    if (size > dest_len)
        res = src_len + dest_len;
    else
        res = src_len + size;
    while (src[i] && (dest_len + 1) < size)
    {
        dest[dest_len] = src[i];
        dest_len++;
        i++;
    }
    dest[dest_len] = '\0';
    return (res);
}