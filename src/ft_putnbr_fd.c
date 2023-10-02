/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouhib <hmouhib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 22:49:02 by hmouhib           #+#    #+#             */
/*   Updated: 2023/10/02 02:06:15 by hmouhib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include <unistd.h>

void    ft_putnbr_fd(int n, int fd)
{
    if (n == 0)
    {
        write(fd, "0", 1);
        return ;
    }
    if (n == -2147483648)
    {
        write(fd, "-2", 2);
        ft_putnbr(147483648);
    }
    if (n < 0)
    {
        write(fd, "-", 1);
        n *= -1;
    }
    if (n > 9)
        ft_putnbr(n / 10);
    write(fd, &"0123456789"[n % 10], 1);
}