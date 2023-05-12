/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoffemo <jdoffemo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 15:18:51 by jdoffemo          #+#    #+#             */
/*   Updated: 2023/04/29 11:07:13 by jdoffemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	p = b;
	while (i < len)
	{
		*p++ = (unsigned char)(c);
		i++;
	}
	return (b);
}
/*int   main()
{
	char str[] = "Bonjour";
    ft_memset(str + 2, '.', 5);
    printf("ft_memset :%s\n", str);
    
    memset(str + 4, '.', 2);
    printf("memset :%s", str);
}*/