/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouhib <hmouhib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 17:43:25 by hmouhib           #+#    #+#             */
/*   Updated: 2023/10/02 05:08:29 by hmouhib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char    *ft_strtrim(char const *s)
{
    char    *tr;
    int     i;
    int     j;
    int     c;

    i = 0;
    j = ft_strlen(s);
    while (s[i] == '\n' && s[i] == '\t' && s[i] == ' ')
        i++;
    while (s[j] == '\n' && s[j] == '\t' && s[j] == ' ')
        j--;
    tr = (char *)malloc(j - i + 1);
    c = 0;
    while (i < j)
    {
        tr[c] = s[i];
        i++;
        c++;
    }
    return (tr);
}