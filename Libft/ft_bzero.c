/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoffemo <jdoffemo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 10:24:46 by jdoffemo          #+#    #+#             */
/*   Updated: 2023/04/29 11:07:25 by jdoffemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	char			*p;

	i = 0;
	p = s;
	while (i < n)
	{
		*p = 0;
		p++;
		i++;
	}
}
/*int   main()
{
	char str[] = "Bonjour";
    ft_bzero(str + 2, 5);
    printf("ft_bzero :%s\n", str);
    
    bzero(str + 2, 1);
    printf("bzero :%s", str);
}*/