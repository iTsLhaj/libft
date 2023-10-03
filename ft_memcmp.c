/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouhib <hmouhib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 04:20:44 by hmouhib           #+#    #+#             */
/*   Updated: 2023/10/03 21:05:58 by hmouhib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t              i;
    const unsigned char *s1_;
    const unsigned char *s2_;

    i = 0;
    s1_ = s1;
    s2_ = s2;
    while (i < n)
    {
        if (*(s1_ + i) != *(s2_ + i))
            return (*(s1_ + i) - *(s2_ + i));
        i++;
    }
    return (0);
}