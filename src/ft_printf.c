/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 21:24:31 by peda-cos          #+#    #+#             */
/*   Updated: 2025/05/16 17:06:25 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_handle_p(va_list args)
{
	void	*ptr;
	int		count;

	ptr = va_arg(args, void *);
	if (ptr == NULL)
		count = ft_printf_putstr_fd("(nil)", 1);
	else
	{
		count = ft_printf_putstr_fd("0x", 1);
		count += ft_printf_putptr_fd(ptr, 1);
	}
	return (count);
}

static int	ft_process_format(const char *format, va_list args, int *i)
{
	int	count;

	count = 0;
	if (format[*i] == 'c')
		count += ft_printf_putchar_fd(va_arg(args, int), 1);
	else if (format[*i] == 's')
		count += ft_printf_putstr_fd(va_arg(args, char *), 1);
	else if (format[*i] == 'p')
		count += ft_handle_p(args);
	else if (format[*i] == 'd' || format[*i] == 'i')
		count += ft_printf_putnbr_fd(va_arg(args, int), 1);
	else if (format[*i] == 'u')
		count += ft_printf_putunbr_fd(va_arg(args, unsigned int), 1);
	else if (format[*i] == 'x')
		count += ft_printf_puthex_fd(va_arg(args, unsigned int), 0, 1);
	else if (format[*i] == 'X')
		count += ft_printf_puthex_fd(va_arg(args, unsigned int), 1, 1);
	else if (format[*i] == '%')
		count += ft_printf_putchar_fd('%', 1);
	else
		count += ft_printf_putchar_fd(format[*i], 1);
	(*i)++;
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		count;

	va_start(args, format);
	i = 0;
	count = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			count += ft_process_format(format, args, &i);
		}
		else
		{
			count += ft_printf_putchar_fd(format[i], 1);
			i++;
		}
	}
	va_end(args);
	return (count);
}
