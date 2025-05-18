/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 09:04:45 by peda-cos          #+#    #+#             */
/*   Updated: 2025/05/17 22:18:04 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_puthex_fd(unsigned int n, int uppercase, int fd)
{
	char	*base;

	if (uppercase)
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (n >= 16)
		ft_puthex_fd(n / 16, uppercase, fd);
	ft_putchar_fd(base[n % 16], fd);
}

static int	ft_puthex(unsigned int n, const char *base, int fd)
{
	int	count;

	count = 0;
	if (n >= 16)
		count += ft_puthex(n / 16, base, fd);
	count += ft_printf_putchar_fd(base[n % 16], fd);
	return (count);
}

int	ft_printf_puthex_fd(unsigned int n, int uppercase, int fd)
{
	if (uppercase)
		return (ft_puthex(n, "0123456789ABCDEF", fd));
	else
		return (ft_puthex(n, "0123456789abcdef", fd));
}
