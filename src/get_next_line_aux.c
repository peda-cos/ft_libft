/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_aux.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 17:21:40 by peda-cos          #+#    #+#             */
/*   Updated: 2025/05/16 17:21:41 by peda-cos         ###   ########.fr       */
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
