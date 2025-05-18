/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 12:32:15 by peda-cos          #+#    #+#             */
/*   Updated: 2025/05/17 22:30:13 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

int	ft_printf_putendl_fd(char *s, int fd)
{
	int	count;

	if (!s)
		return (0);
	count = ft_printf_putstr_fd(s, fd);
	count += ft_printf_putchar_fd('\n', fd);
	return (count);
}
