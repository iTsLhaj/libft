/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouhib <hmouhib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 18:32:45 by hmouhib           #+#    #+#             */
/*   Updated: 2023/11/26 17:55:09 by hmouhib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!haystack && len == 0)
		return (NULL);
	if (!(*needle))
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (haystack[i + j] != '\0' && needle[j] != '\0'
			&& haystack[i + j] == needle[j] && i + j < len)
			j++;
		if (j == ft_strlen(needle))
			return ((char *)(haystack + i));
		i++;
	}
	return (0);
}
