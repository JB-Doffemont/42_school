/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoffemo <jdoffemo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 11:44:17 by jdoffemo          #+#    #+#             */
/*   Updated: 2023/05/30 16:19:19 by jdoffemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1000000000
# endif

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

char	*get_next_line(int fd);
void	*ft_calloc(size_t count, size_t size);
void	ft_bzero(void *s, size_t n);
size_t	ft_strlen(const char *str);
size_t	ft_strlcat(char *dst, char *src, size_t dstsize);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_save_stash(char *stack);
char	*ft_strdup(char *str);
char	*ft_strchr(char *s, int c);

#endif