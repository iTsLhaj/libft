/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouhib <hmouhib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 16:42:49 by hmouhib           #+#    #+#             */
/*   Updated: 2023/10/02 02:10:49 by hmouhib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include <stdlib.h>

char    *ft_strjoin(char const *s1, char const *s2)
{
    char    *fs;

    fs = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
    if (fs == NULL)
        return (NULL);
    while (*s1)
    {
        *fs = *s1;
        fs++;
        s1++;
    }
    while (*s2)
    {
        *fs = *s2;
        fs++;
        s2++;
    }
    *fs = '\0';
    return (&fs[0]);
}