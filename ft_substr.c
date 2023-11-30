/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouhib <hmouhib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 16:30:55 by hmouhib           #+#    #+#             */
/*   Updated: 2023/11/25 14:55:33 by hmouhib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_allocation_size(char const *s,
			unsigned int start, size_t len)
{
	size_t	size;
	size_t	i;

	i = 0;
	size = 0;
	if (start > ft_strlen(s))
		return (1);
	while (s[i])
	{
		if (i >= start && size < len)
			size++;
		i++;
	}
	if (size == len)
		return (len + 1);
	else
		return (size + 1);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ss;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	ss = (char *)malloc(get_allocation_size(s, start, len));
	if (!ss)
		return (NULL);
	while (s[i])
	{
		if (i >= start && j < len)
		{
			ss[j] = s[i];
			j++;
		}
		i++;
	}
	ss[j] = 0;
	return (ss);
}
