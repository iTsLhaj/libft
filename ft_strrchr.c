/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouhib <hmouhib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 04:48:42 by hmouhib           #+#    #+#             */
/*   Updated: 2023/10/02 05:11:01 by hmouhib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char    *ft_strchr(const char *s, int c)
{
    char    *last;
    int     i;

    last = NULL;
    i = 0;
    while (s[i])
    {
        if (s[i] == c)
            last = (char *)&s[i];
        i++;
    }
    return (last);
}