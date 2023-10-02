/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouhib <hmouhib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 16:26:42 by hmouhib           #+#    #+#             */
/*   Updated: 2023/10/02 03:43:27 by hmouhib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int     ft_strnequ(char const *s1, char const *s2, size_t n)
{
    size_t i;

    i = 0;
    while (*s1 && *s2 && i < n)
    {
        if (*s1 != *s2)
            return (0);
        s1++;
        s2++;
        i++;
    }
    return (1);
}