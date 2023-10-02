/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouhib <hmouhib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 04:51:14 by hmouhib           #+#    #+#             */
/*   Updated: 2023/10/02 04:48:42 by hmouhib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char    *ft_strstr(const char *haystack, const char *needle)
{
    int     i;
    void    *ph;
    
    if(haystack == NULL || needle == NULL)
        return (NULL);
    i = 0;
    while (haystack[i])
    {
        ph = (void *)&haystack[i];
        if (ft_memcmp(ph, needle, sizeof(haystack[i])) == 0)
            return (&haystack[i]);
        i++;
    }
    return (NULL);
}