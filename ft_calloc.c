/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouhib <hmouhib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 18:31:41 by hmouhib           #+#    #+#             */
/*   Updated: 2023/11/28 18:37:59 by hmouhib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*allocated_mem;

	allocated_mem = malloc(count * size);
	if (!allocated_mem)
		return (NULL);
	ft_bzero(allocated_mem, count * size);
	return (allocated_mem);
}

int	main(void)
{
	ft_calloc(SIZE_MAX, SIZE_MAX);
}
