/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoffemo <jdoffemo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 12:54:21 by jdoffemo          #+#    #+#             */
/*   Updated: 2023/04/29 16:29:38 by jdoffemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*ptr_dst;
	char	*ptr_src;

	i = 0;
	ptr_dst = dst;
	ptr_src = (char *)src;
	if (!ptr_dst && !ptr_src)
		return (0);
	if (dst > src)
	{
		while (len > 0)
		{
			len--;
			ptr_dst[len] = ptr_src[len];
		}
	}
	while (i < len)
	{
		*ptr_dst++ = *ptr_src++;
		i++;
	}
	return (dst);
}

// int   main()
// {
// 	char str[] = "lorem ipsum dolor sit amet";
// 	char *dst;
// 	char s[] = "lorem ipsum dolor sit amet";
// 	char *dst2;
// 	dst = str + 1;
// 	dst2 = s + 1;
//     printf("%s\n", ft_memmove(dst, str, 30));
//     printf("%s\n", memmove(dst2, s, 8));
// }
