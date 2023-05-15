/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoffemo <jdoffemo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 10:49:08 by jdoffemo          #+#    #+#             */
/*   Updated: 2023/04/29 11:34:30 by jdoffemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*ptr_dst;
	char	*ptr_src;

	i = 0;
	ptr_dst = dst;
	ptr_src = (char *)src;
	if (!ptr_dst && !ptr_src)
		return (0);
	while (i < n)
	{
		ptr_dst[i] = ptr_src[i];
		i++;
	}
	return (dst);
}

/*int   main()
{
	char str[] = "45";
	char dst[] = "";
	char dst2[] = "";
    ft_memcpy(dst2, str, 3);
    printf("ft_memcpy :%s\n", dst2);
    
    memcpy(dst, str, 3);
    printf("memcpy :%s", dst);
}*/