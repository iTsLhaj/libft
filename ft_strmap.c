/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouhib <hmouhib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 16:18:02 by hmouhib           #+#    #+#             */
/*   Updated: 2023/10/02 02:11:01 by hmouhib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include <stdlib.h>

char    *ft_strmap(char const *s, char (*f)(char))
{
    char    *fs;

    fs = (char *)malloc(ft_strlen(s));
    while (*s)
    {
        *fs = f(*s);
        s++;
        fs++;
    }
    *fs = '\0';
    return (&fs[0]);
}