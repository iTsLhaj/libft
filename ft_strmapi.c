/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouhib <hmouhib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 16:21:14 by hmouhib           #+#    #+#             */
/*   Updated: 2023/10/03 21:13:44 by hmouhib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char    *fs;
    int     i;

    i = 0;
    fs = (char *)malloc(ft_strlen(s) + 1);
    while (s[i])
    {
        fs[i] = (*f)(i, s[i]);
        i++;
    }
    fs[i] = '\0';
    return (fs);
}