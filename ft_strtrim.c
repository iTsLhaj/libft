/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouhib <hmouhib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 19:46:31 by hmouhib           #+#    #+#             */
/*   Updated: 2023/11/21 21:47:45 by hmouhib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isinset(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

static char	*ft_trim(const char *s1, const char *set, size_t *index)
{
	size_t	e;
	size_t	s;
	char	*trimmed;

	s = 0;
	while (ft_isinset(*(s1 + s), set))
		s++;
	e = ft_strlen(s1) - 1;
	while (ft_isinset(*(s1 + e), set))
		e--;
	trimmed = (char *)malloc(e - s + 2);
	if (!trimmed)
		return (NULL);
	while (s < e + 1)
	{
		trimmed[*index] = s1[s];
		*index += 1;
		s++;
	}
	return (trimmed);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*trimmed;
	size_t	s;
	size_t	k;

	if (!s1 || !set)
		return (NULL);
	s = 0;
	while (ft_isinset(*(s1 + s), set))
		s++;
	k = 0;
	if (s == ft_strlen(s1))
		trimmed = (char *)malloc(1);
	else
		trimmed = ft_trim(s1, set, &k);
	if (trimmed)
		*(trimmed + k) = 0;
	return (trimmed);
}
