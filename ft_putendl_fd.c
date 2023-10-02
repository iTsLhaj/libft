/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouhib <hmouhib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 22:47:05 by hmouhib           #+#    #+#             */
/*   Updated: 2023/10/02 02:06:15 by hmouhib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include <unistd.h>

void    ft_putendl_fd(char const *s, int fd)
{
    while (*s)
    {
        write(fd, &s, 1);
        s++;
    }
    write(fd, "\n", 1);
}