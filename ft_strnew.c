/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouhib <hmouhib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 15:46:44 by hmouhib           #+#    #+#             */
/*   Updated: 2023/10/02 05:07:25 by hmouhib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char    *ft_strnew(size_t size)
{
    char    *p;

    p = (char *)malloc(size * sizeof(char));
    *p = '\0';
    return (p);
}