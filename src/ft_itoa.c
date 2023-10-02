/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouhib <hmouhib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 19:27:31 by hmouhib           #+#    #+#             */
/*   Updated: 2023/10/02 02:06:15 by hmouhib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include <stdlib.h>

char    *ft_itoa(int n)
{
    char    buffer[100];
    int     i;
    int     j;
    int     s;
    char    *str;
    
    if (n == 0)
        return "0";
    s = -1;
    if (n < 0)
        n *= s;
    else
        s = 1;
    i = 0;
    while (n != 0)
    {
        buffer[i++] = n % 10 + '0';
        n /= 10;
    }
    str = (char *)malloc(i);
    j = 0;
    if (s == -1)
        str[j++] = '-';
    while (i > -1)
        str[j++] = buffer[--i];
    str[j] = '\0';
    return (str);
}