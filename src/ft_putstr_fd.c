/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 12:29:03 by peda-cos          #+#    #+#             */
/*   Updated: 2025/05/16 17:18:49 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printf_putstr_fd(char *s, int fd)
{
	int	count;
	int	i;

	if (!s)
		return (ft_printf_putstr_fd("(null)", fd));
	count = 0;
	i = 0;
	while (s[i])
	{
		count += ft_printf_putchar_fd(s[i], fd);
		i++;
	}
	return (count);
}
