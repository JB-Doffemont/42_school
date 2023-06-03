/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoffemo <jdoffemo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 11:44:55 by jdoffemo          #+#    #+#             */
/*   Updated: 2023/06/03 10:36:43 by jdoffemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

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
	if (stash[i] != '\n')
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
	while (char_read > 0)
	{
		char_read = read(fd, buffer, BUFFER_SIZE);
		if (char_read < 0)
		{
			free(buffer);
			return (NULL);
		}
		else if (!char_read)
			break ;
		buffer[char_read] = '\0';
		stash = ft_strjoin(stash, buffer);
		if (ft_strchr(stash, '\n'))
			break ;
	}
	free(buffer);
	return (stash);
}

char	*get_next_line(int fd)
{
	static char	*stash[OPEN_MAX];
	char		*buffer;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	if (read(fd, 0, 0) < 0)
	{
		free(stash[fd]);
		stash[fd] = NULL;
		return (NULL);
	}
	buffer = ft_calloc(sizeof(char), (BUFFER_SIZE + 1));
	if (!buffer)
		return (NULL);
	if (!stash[fd])
		stash[fd] = ft_calloc(sizeof(char), (BUFFER_SIZE + 1));
	stash[fd] = ft_save_buffer(stash[fd], buffer, fd);
	if (!stash[fd])
		return (NULL);
	line = ft_strdup(stash[fd]);
	stash[fd] = ft_save_stash(stash[fd]);
	return (line);
}

// int	main(void)
// {
// 	int	fd;
// 	int	fd2;
// 	int	fd3;

// 	char *ptr;
// 	char *ptr2;
// 	char *ptr3;
// 	fd = open("test1.txt", O_RDONLY);
// 	fd2 = open("test12.txt", O_RDONLY);
// 	fd3 = open("test123.txt", O_RDONLY);
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
// 		ptr = get_next_line(fd);
// 		printf("%s", ptr);
// 		free(ptr);
// 		ptr2 = get_next_line(fd2);
// 		printf("%s", ptr2);
// 		free(ptr2);
// 		ptr3 = get_next_line(fd3);
// 		printf("%s", ptr3);
// 		free(ptr3);
// 		ptr3 = get_next_line(fd3);
// 		printf("%s", ptr3);
// 		free(ptr3);
// 	// printf("Fourth : %s", get_next_line(fd));
// 	// get_next_line(fd);
// 	// get_next_line(fd);
// 	// get_next_line(fd);
// 	close(fd);
// 	close(fd2);
// 	close(fd3);
// 	return (0);
// }
