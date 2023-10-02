/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouhib <hmouhib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 04:26:58 by hmouhib           #+#    #+#             */
/*   Updated: 2023/10/02 02:11:20 by hmouhib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include <stdlib.h>

char    *ft_strdup(const char *s)
{
    char    *d;
    int     i;

    d = (char *)malloc(ft_strlen(s));
    i = 0;
    while (s[i])
    {
        d[i] = s[i];
        i++;
    }
    d[i] = '\0';
    return (d);
}