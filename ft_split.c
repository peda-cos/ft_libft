/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 12:38:32 by peda-cos          #+#    #+#             */
/*   Updated: 2024/10/05 23:50:17 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	count_words(const char *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static char	*allocate_word(const char *s, char c)
{
	size_t	len;
	char	*word;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	ft_strlcpy(word, s, len + 1);
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		words;
	int		i;

	words = count_words(s, c);
	split = (char **)malloc(sizeof(char *) * (words + 1));
	if (!split)
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			split[i] = allocate_word(s, c);
			if (!split[i])
			{
				while (i > 0)
					free(split[--i]);
				free(split);
				return (NULL);
			}
			i++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	split[i] = NULL;
	return (split);
}
