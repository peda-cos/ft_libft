/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 06:25:07 by peda-cos          #+#    #+#             */
/*   Updated: 2024/10/04 07:05:29 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	if (dst == NULL && src == NULL)
		return (NULL);
	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if (d < s)
		return (ft_memcpy(dst, src, len));
	i = len;
	while (i--)
		d[i] = s[i];
	return (dst);
}
