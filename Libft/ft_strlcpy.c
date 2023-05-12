/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoffemo <jdoffemo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 11:50:21 by jdoffemo          #+#    #+#             */
/*   Updated: 2023/04/25 15:03:42 by jdoffemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = dstsize - 1;
	if (dstsize != 0)
	{
		while (len > 0 && src[i])
		{
			dst[i] = src[i];
			len--;
			i++;
		}
		dst[i] = '\0';
	}
	i = 0;
	while (src[i])
		i++;
	return (i);
}
/*int	main(void)
{
	char dst[5];
	printf("%lu\n", ft_strlcpy(dst, "Bonjour", 0));
	printf("%s\n", dst);
	printf("%lu\n", strlcpy(dst, "Bonjour", 0));
	printf("%s\n", dst);
	return (1);
}*/