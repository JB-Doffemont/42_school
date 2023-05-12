/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoffemo <jdoffemo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 11:56:39 by jdoffemo          #+#    #+#             */
/*   Updated: 2023/04/29 12:18:44 by jdoffemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		if (*ptr++ == (unsigned char)(c))
			return ((void *)s + i);
		i++;
	}
	return (NULL);
}

/*int   main()
{
	char str[] = "45bobo";
	char str2[] = "45bobo";
    printf("%s\n", ft_memchr(str, 'b', 3));
    
    printf("%s\n", memchr(str2, 'b', 4));
}*/