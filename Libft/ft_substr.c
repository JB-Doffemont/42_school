/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoffemo <jdoffemo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 10:52:01 by jdoffemo          #+#    #+#             */
/*   Updated: 2023/05/02 13:53:34 by jdoffemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;	
	size_t	s_len;			
	size_t	i;
	size_t	y;

	i = 0;
	y = 0;
	s_len = ft_strlen(s);
	if (!s || start >= (unsigned int)s_len)
		return (ft_calloc(sizeof(char), (1)));
	if (len > s_len)
		str = ft_calloc(sizeof(char), (s_len + 1));
	else
		str = ft_calloc(sizeof(char), (len + 1));
	if (!str)
		return (NULL);
	while (i < start)
		i++;
	while (y < len && s[i])
		str[y++] = (char)s[i++];
	str[y] = '\0';
	return (str);
}
/*int   main()
{
    printf("ft_substr :%s\n", ft_substr("Bonjour", 2, 3));
}*/
