/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouhib <hmouhib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 04:48:42 by hmouhib           #+#    #+#             */
/*   Updated: 2023/10/02 02:09:33 by hmouhib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
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
            last = &s[i];
        i++;
    }
    return (last);
}