/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouhib <hmouhib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 14:01:55 by hmouhib           #+#    #+#             */
/*   Updated: 2023/11/24 20:33:18 by hmouhib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*mapped;
	unsigned int	i;
	size_t			size;

	if (!s || !f)
		return (NULL);
	i = 0;
	size = ft_strlen(s) + 1;
	mapped = (char *)malloc(size);
	if (!mapped)
		return (NULL);
	ft_bzero((void *)mapped, size);
	while (s[i])
	{
		mapped[i] = f(i, s[i]);
		i++;
	}
	return (mapped);
}
