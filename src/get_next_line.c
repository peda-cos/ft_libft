/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 10:53:04 by peda-cos          #+#    #+#             */
/*   Updated: 2025/05/16 17:22:41 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*read_line(int fd, char *buf, char *storage)
{
	int	bytes_read;

	bytes_read = 1;
	if (!storage)
	{
		storage = init_storage();
		if (!storage)
			return (NULL);
	}
	while (!ft_strchr(storage, '\n') && bytes_read != 0)
	{
		bytes_read = read(fd, buf, BUFFER_SIZE);
		if (bytes_read == -1)
			return (handle_read_error(storage));
		buf[bytes_read] = '\0';
		storage = append_buffer(storage, buf);
		if (!storage)
			return (NULL);
	}
	return (storage);
}

static char	*get_line(char *backup)
{
	int		i;
	char	*line;

	i = 0;
	if (!backup[i])
		return (NULL);
	while (backup[i] && backup[i] != '\n')
		i++;
	line = ft_substr(backup, 0, i + 1);
	return (line);
}

static char	*new_backup(char *backup)
{
	int		i;
	char	*temp;

	i = 0;
	while (backup[i] && backup[i] != '\n')
		i++;
	if (!backup[i])
		return (handle_read_error(backup));
	temp = ft_substr(backup, i + 1, ft_strlen(backup) - i);
	free(backup);
	return (temp);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*storage;
	char		*buffer;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (NULL);
	storage = read_line(fd, buffer, storage);
	free(buffer);
	if (!storage)
		return (NULL);
	line = get_line(storage);
	storage = new_backup(storage);
	return (line);
}
