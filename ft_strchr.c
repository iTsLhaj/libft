/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouhib <hmouhib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 04:46:39 by hmouhib           #+#    #+#             */
/*   Updated: 2023/10/02 05:10:38 by hmouhib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char    *ft_strchr(const char *s, int c)
{
    char    *_s;
    int     i;

    i = 0;
    _s = (char *)s;
    while (_s[i])
    {
        if (_s[i] == c)
            return (&_s[i]);
        i++;
    }
    return (NULL);
}