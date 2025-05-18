/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 03:49:23 by peda-cos          #+#    #+#             */
/*   Updated: 2025/05/17 22:23:57 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*handle_read_error(char *storage)
{
	free(storage);
	return (NULL);
}

char	*init_storage(void)
{
	char	*storage;

	storage = ft_strdup("");
	if (!storage)
		return (NULL);
	return (storage);
}

char	*append_buffer(char *storage, char *buffer)
{
	char	*temp;

	temp = storage;
	storage = ft_strjoin(temp, buffer);
	free(temp);
	return (storage);
}
