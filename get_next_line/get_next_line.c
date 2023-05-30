/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoffemo <jdoffemo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 11:44:55 by jdoffemo          #+#    #+#             */
/*   Updated: 2023/05/30 16:43:34 by jdoffemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlcat(char *dst, char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	while (dst[i])
		i++;
	while (*src && i < dstsize - 1)
	{
		dst[i] = *src;
		i++;
		src++;
	}
	dst[i] = '\0';
	return (i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char		*s3;
	size_t		len;

	if (!s1 && !s2)
		return (ft_calloc(sizeof(char), 0));
	if (!s1)
		return (NULL);
	len = (ft_strlen(s1) + ft_strlen(s2)) + 1;
	s3 = ft_calloc(sizeof(char), len);
	if (!s3)
		return (NULL);
	ft_strlcat(s3, s1, len);
	ft_strlcat(s3, s2, len);
	free(s1);
	return (s3);
}

char	*ft_save_stash(char *stash)
{
	int		i;
	int		j;
	char	*s;

	i = 0;
	while (stash[i] && stash[i] != '\n')
		i++;
	if (!stash[i])
	{
		free(stash);
		return (NULL);
	}
	i += 1;
	s = ft_calloc(sizeof(char), (ft_strlen(stash) - i) + 1);
	if (!s)
		return (NULL);
	j = 0;
	while (stash[i])
	{
		s[j++] = stash[i++];
	}
	s[j] = '\0';
	free(stash);
	return (s);
}

char	*ft_save_buffer(char *stash, char *buffer, int fd)
{
	size_t		char_read;

	char_read = 1;
	while (char_read > 0 && !ft_strchr(stash, '\n'))
	{
		char_read = read(fd, buffer, BUFFER_SIZE);
		if (char_read < 0)
		{
			free(buffer);
			return (NULL);
		}
		buffer[char_read] = '\0';
		stash = ft_strjoin(stash, buffer);
	}
	free(buffer);
	return (stash);
}

char	*get_next_line(int fd)
{
	static char	*stash;
	char		*buffer;
	char		*line;

	if (read(fd, 0, 0) < 0)
	{
		free(stash);
		stash = NULL;
		return (NULL);
	}
	buffer = ft_calloc(sizeof(char), (BUFFER_SIZE + 1));
	if (!buffer)
		return (NULL);
	if (!stash)
		stash = ft_calloc(sizeof(char), (BUFFER_SIZE + 1));
	stash = ft_save_buffer(stash, buffer, fd);
	line = ft_strdup(stash);
	stash = ft_save_stash(stash);
	return (line);
}

// int	main(void)
// {
// 	int	fd;

// 	char *ptr;
// 	fd = open("test.txt", O_RDONLY);
// 	// printf("Second : %s", get_next_line(fd));
// 	// printf("Third : %s", get_next_line(fd));
// 		ptr = get_next_line(fd);
// 		printf("%s", ptr);
// 		free(ptr);
// 		ptr = get_next_line(fd);
// 		printf("%s", ptr);
// 		free(ptr);
// 		ptr = get_next_line(fd);
// 		printf("%s", ptr);
// 		free(ptr);
// 		ptr = get_next_line(fd);
// 		printf("%s", ptr);
// 		free(ptr);
// 	// printf("Fourth : %s", get_next_line(fd));
// 	// get_next_line(fd);
// 	// get_next_line(fd);
// 	// get_next_line(fd);
// 	close(fd);
// 	return (0);
// }
