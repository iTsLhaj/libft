/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouhib <hmouhib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 16:42:49 by hmouhib           #+#    #+#             */
/*   Updated: 2023/10/03 21:34:00 by hmouhib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char    *ft_strjoin(char const *s1, char const *s2)
{
    char    *fs;
    int     i;
    int     j;

    fs = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
    i = 0;
    j = 0;
    if (fs == NULL || s1 == NULL || s2 == NULL)
        return (NULL);
    while (s1[j])
    {
        fs[i] = s1[j];
        i++;
        j++;
    }
    j = 0;
    while (s2[j])
    {
        fs[i] = s2[j];
        i++;
        j++;
    }
    fs[i] = 0;
    return (&fs[0]);
}