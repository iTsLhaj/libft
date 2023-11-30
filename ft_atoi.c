/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouhib <hmouhib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 18:29:16 by hmouhib           #+#    #+#             */
/*   Updated: 2023/11/26 17:39:06 by hmouhib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	return (
		c == '\n' || c == '\t' || c == '\v'
		|| c == '\f' || c == ' ' || c == '\r'
	);
}

int	ft_atoi(const char *str)
{
	int					sign;
	unsigned long long	n;

	sign = 1;
	n = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (ft_isdigit(*str))
	{
		n = n * 10 + (*str - '0');
		str++;
	}
	return ((int)n * sign);
}
