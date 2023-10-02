/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouhib <hmouhib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 04:36:18 by hmouhib           #+#    #+#             */
/*   Updated: 2023/10/02 03:43:27 by hmouhib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char    *ft_strncat(char *dest, const char *src, size_t n)
{
    size_t i;
    size_t j;

    i = 0;
    j = 0;
    while (dest[i])
        i++;
    while (src[j] && j < n)
        dest[i++] = src[j++];
    dest[i] = '\0';
    return (dest);
}