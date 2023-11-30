/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouhib <hmouhib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 18:31:56 by hmouhib           #+#    #+#             */
/*   Updated: 2023/11/26 17:54:05 by hmouhib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1_;
	unsigned char	*s2_;

	i = 0;
	if (!n || (!s1 && !s2))
		return (0);
	s1_ = (unsigned char *)s1;
	s2_ = (unsigned char *)s2;
	while (i < n)
	{
		if (s1_[i] != s2_[i])
			return ((int)s1_[i] - (int)s2_[i]);
		i++;
	}
	return (0);
}
