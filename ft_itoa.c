/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 12:38:38 by peda-cos          #+#    #+#             */
/*   Updated: 2024/10/05 21:44:55 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_itoa(int n)
{
	long	num;
	int		len;
	char	*str;

	num = n;
	len = 0;
	if (num <= 0)
		len = 1;
	while (num != 0)
	{
		num /= 10;
		len++;
	}
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	num = n;
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	while (len > 0)
	{
		len--;
		if (str[len] != '-')
			str[len] = (num % 10) + '0';
		num /= 10;
	}
	return (str);
}
