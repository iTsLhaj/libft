/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouhib <hmouhib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 04:26:58 by hmouhib           #+#    #+#             */
/*   Updated: 2023/10/03 21:10:15 by hmouhib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char    *ft_strdup(const char *s)
{
    char    *d;
    int     i;

    d = (char *)malloc(ft_strlen(s) + 1);
    i = 0;
    while (s[i])
    {
        d[i] = s[i];
        i++;
    }
    d[i] = '\0';
    return (d);
}