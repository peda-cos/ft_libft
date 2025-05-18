/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 09:04:45 by peda-cos          #+#    #+#             */
/*   Updated: 2025/05/17 22:18:04 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putptr_fd(void *ptr, int fd)
{
	unsigned long	addr;

	addr = (unsigned long)ptr;
	if (addr >= 16)
		ft_putptr_fd((void *)(addr / 16), fd);
	ft_putchar_fd("0123456789abcdef"[addr % 16], fd);
}

int	ft_printf_putptr_fd(void *ptr, int fd)
{
	int				count;
	unsigned long	addr;

	count = 0;
	addr = (unsigned long)ptr;
	if (addr >= 16)
		count += ft_printf_putptr_fd((void *)(addr / 16), fd);
	count += ft_printf_putchar_fd("0123456789abcdef"[addr % 16], fd);
	return (count);
}
