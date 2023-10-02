/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouhib <hmouhib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 16:31:41 by hmouhib           #+#    #+#             */
/*   Updated: 2023/10/02 02:14:28 by hmouhib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include <stdlib.h>
#include <string.h>

char    *ft_strsub(char const *s, unsigned int start, size_t len)
{
    char    *substr;
    size_t  i;

    substr = (char *)malloc(len + 1);
    i = 0;
    while (i < len)
    {
        substr[i] = s[start];
        i++;
        start++;
    }
    substr[i] = '\0';
    return (substr);
}