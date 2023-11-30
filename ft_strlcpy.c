/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouhib <hmouhib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:31:02 by hmouhib           #+#    #+#             */
/*   Updated: 2023/11/26 17:54:55 by hmouhib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	return_size;
	size_t	length;

	return_size = ft_strlen(src);
	if (size)
	{
		if (return_size >= size)
			length = size - 1;
		else
			length = return_size;
		ft_memcpy(dst, src, length);
		dst[length] = 0;
	}
	return (return_size);
}
