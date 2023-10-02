/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouhib <hmouhib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 04:51:14 by hmouhib           #+#    #+#             */
/*   Updated: 2023/10/02 04:47:06 by hmouhib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char    *ft_strstr(const char *haystack, const char *needle)
{
    int i;
    
    if(haystack == NULL || needle == NULL)
        return (NULL);
    i = 0;
    while (haystack[i])
    {
        if (ft_memcmp(&haystack[i], needle) == 0)
            return (&haystack[i]);
        i++;
    }
    return (NULL);
}