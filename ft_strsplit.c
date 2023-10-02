/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouhib <hmouhib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 17:56:15 by hmouhib           #+#    #+#             */
/*   Updated: 2023/10/02 03:43:27 by hmouhib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int     word_count(char const *s, char c)
{
    int     i;
    int     j;

    j = 0;
    i = 0;
    while (s[i])
    {
        if (s[i] == c)
            j++;
        i++;
    }
    return ++j;
}

char    **ft_strsplit(char const *s, char c)
{
    int     i;
    int     j;
    int     l;
    int     word_len;
    int     words_count;
    char    **sp;
    
    words_count = word_count(s, c);
    word_len = ft_strlen(s) / words_count + 1;
    sp = (char **)malloc(words_count);
    i = 0;
    while (i < words_count)
    {
        sp[i] = (char *)malloc(word_len);
        i++;
    }
    i = 0;
    j = 0;
    l = 0;
    while (s[i])
    {
        if (s[i] == c)
        {
            sp[j][l] = '\0';
            j++;
            i++;
            l = 0;
        }
        sp[j][l] = s[i];
        i++;
        l++;
    }
    sp[words_count] = 0;
    return (sp);
}