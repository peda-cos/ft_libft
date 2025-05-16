/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_startswith.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 17:49:32 by peda-cos          #+#    #+#             */
/*   Updated: 2025/05/16 17:32:57 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_startswith(const char *str, const char *prefix)
{
	if (!str || !prefix)
		return (0);
	while (*prefix)
	{
		if (*prefix != *str)
			return (0);
		prefix++;
		str++;
	}
	return (1);
}
