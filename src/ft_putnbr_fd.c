/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 12:38:53 by peda-cos          #+#    #+#             */
/*   Updated: 2025/05/16 17:19:10 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printf_putnbr_fd(int n, int fd)
{
	long	num;
	int		count;

	num = n;
	count = 0;
	if (num < 0)
	{
		count += ft_printf_putchar_fd('-', fd);
		num = -num;
	}
	if (num >= 10)
		count += ft_printf_putnbr_fd(num / 10, fd);
	count += ft_printf_putchar_fd((num % 10) + '0', fd);
	return (count);
}
