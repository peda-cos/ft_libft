/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 12:32:15 by peda-cos          #+#    #+#             */
/*   Updated: 2025/05/16 17:16:16 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_printf_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	ft_printf_putstr_fd(s, fd);
	ft_printf_putchar_fd('\n', fd);
}
