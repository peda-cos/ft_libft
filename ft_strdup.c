/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 10:36:24 by peda-cos          #+#    #+#             */
/*   Updated: 2024/10/07 15:59:05 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*dup;

	if (!s1)
		return (NULL);
	len = ft_strlen(s1) + 1;
	dup = (char *)malloc(sizeof(char) * len);
	if (!dup)
		return (NULL);
	ft_strlcpy(dup, s1, len);
	return (dup);
}
