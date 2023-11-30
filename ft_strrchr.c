/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouhib <hmouhib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 18:32:52 by hmouhib           #+#    #+#             */
/*   Updated: 2023/11/26 17:55:14 by hmouhib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*lo;

	lo = NULL;
	while (*s)
	{
		if (*s == (char)c)
			lo = (char *)s;
		s++;
	}
	if (*s == (char)c)
		lo = (char *)s;
	return (lo);
}
