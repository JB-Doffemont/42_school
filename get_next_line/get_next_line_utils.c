/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoffemo <jdoffemo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 11:44:52 by jdoffemo          #+#    #+#             */
/*   Updated: 2023/05/30 16:43:30 by jdoffemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;

	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}

char	*ft_strdup(char *str)
{
	size_t	i;
	char	*s;

	i = 0;
	if (ft_strlen(str) == 0)
		return (NULL);
	s = ft_calloc(ft_strlen(str), (sizeof(char) + 1));
	if (!s)
		return (NULL);
	while (str[i] && str[i] != '\n')
	{
		s[i] = str[i];
		i++;
	}
	if (str[i] == '\n')
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}

char	*ft_strchr(char *s, int c)
{
	int	i;

	i = 0;
	if (!s[i] || !s)
		return (NULL);
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
			return ((char *)&(s[i]));
		i++;
	}
	if (s[i] == (unsigned char)c)
	{
		return ((char *)&(s[i]));
	}
	return (NULL);
}
