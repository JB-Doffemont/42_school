/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoffemo <jdoffemo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 12:20:25 by jdoffemo          #+#    #+#             */
/*   Updated: 2023/04/29 12:52:15 by jdoffemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*ptr_s1;
	char	*ptr_s2;

	i = 0;
	ptr_s1 = (char *)s1;
	ptr_s2 = (char *)s2;
	while (i < n)
	{
		if (*ptr_s1 != *ptr_s2)
			return ((unsigned char)*ptr_s1 - (unsigned char)*ptr_s2);
		i++;
		ptr_s1++;
		ptr_s2++;
	}
	return (0);
}

/*int   main()
{
	char str[] = "Hel3o";
	char str2[] = "Hello";
    printf("%d\n", ft_memcmp(str, str2, 6));
    
    printf("%d\n", memcmp(str, str2, 6));
}*/