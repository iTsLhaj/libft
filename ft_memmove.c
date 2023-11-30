/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouhib <hmouhib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:10:29 by hmouhib           #+#    #+#             */
/*   Updated: 2023/11/26 17:54:41 by hmouhib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	if (!n || dest == src)
		return ((void *)dest);
	if (dest <= src)
	{
		while (i < n)
		{
			*(unsigned char *)(dest + i) = *(const unsigned char *)(src + i);
			i++;
		}
	}
	else
	{
		while (n--)
			*(unsigned char *)(dest + n) = *(const unsigned char *)(src + n);
	}
	return (dest);
}
