/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouhib <hmouhib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 18:04:25 by hmouhib           #+#    #+#             */
/*   Updated: 2023/11/26 17:53:55 by hmouhib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_nsize(int n)
{
	int	size;

	size = 1;
	if (n < 0)
	{
		size++;
		n = -n;
	}
	if (!n)
		return (size);
	while (n)
	{
		n /= 10;
		size++;
	}
	return (size - 1);
}

static void	init_nb(unsigned int *nb, int n, char *buffer)
{
	if (n < 0)
	{
		buffer[0] = '-';
		*nb = -n;
	}
	else
		*nb = n;
}

char	*ft_itoa(int n)
{
	unsigned int	nb;
	int				size;
	char			*buffer;

	size = get_nsize(n);
	buffer = (char *)malloc(size + 1);
	if (!buffer)
		return (NULL);
	buffer[size] = 0;
	if (!n)
	{
		buffer[0] = '0';
		return (buffer);
	}
	init_nb(&nb, n, buffer);
	while (--size)
	{
		buffer[size] = nb % 10 + '0';
		nb /= 10;
	}
	if (nb)
		buffer[size] = nb % 10 + '0';
	return (buffer);
}
