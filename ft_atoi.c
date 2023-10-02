/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouhib <hmouhib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 05:06:12 by hmouhib           #+#    #+#             */
/*   Updated: 2023/10/02 02:08:08 by hmouhib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int     ft_atoi(const char nptr)
{
    int i;
    int n;
    int s;

    i = 0;
    while (nptr[i] == ' ' || nptr[i] == '\t' || nptr[i] == '\v' || nptr[i] == '\f' || nptr[i] == '\n' || nptr[i] == '\r')
        i++;
    s = -1;
    while (nptr[i] == '+' || nptr[i] == '-')
    {
        if (s != -1)
            return (0);
        if (nptr[i] == '-')
            s = -1;
        else
            s = 1;
        i++;
    }
    n = 0;
    while (nptr[i] >= '0' && nptr[i] <= '9')
    {
        n = n * 10 + (nptr[i] - '0');
        i++;
    }
    return (n);
}