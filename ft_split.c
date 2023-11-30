/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouhib <hmouhib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:13:06 by hmouhib           #+#    #+#             */
/*   Updated: 2023/11/26 17:54:40 by hmouhib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (*(s + i))
	{
		if (*(s + i) != c)
		{
			count++;
			while (*(s + i) && *(s + i) != c)
				i++;
		}
		else if (*(s + i) == c)
			i++;
	}
	return (count);
}

static void	free_array(char **array, int i)
{
	while (--i >= 0)
		free(*(array + i));
	free(array);
}

static int	word_len(char const *str, char c)
{
	int	l;

	l = 0;
	while (str[l] && str[l] != c)
		l++;
	return (l);
}

static char	**split_(const char *s, char **strings, char c, int wcount)
{
	int	wlen;
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < wcount)
	{
		while (s[j] && s[j] == c)
			j++;
		wlen = word_len(&s[j], c);
		strings[i] = ft_substr(s, j, wlen);
		if (!strings[i])
		{
			free_array(strings, i);
			return (NULL);
		}
		j += wlen;
		i++;
	}
	strings[i] = NULL;
	return (strings);
}

char	**ft_split(char const *s, char c)
{
	char	**splitted;
	int		words_count;

	if (!s)
		return (NULL);
	words_count = count_words(s, c);
	splitted = (char **)malloc(sizeof(char *) * (words_count + 1));
	if (!splitted)
		return (NULL);
	splitted = split_(s, splitted, c, words_count);
	return (splitted);
}
