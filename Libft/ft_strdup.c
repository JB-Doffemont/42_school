/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoffemo <jdoffemo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 10:33:23 by jdoffemo          #+#    #+#             */
/*   Updated: 2023/05/02 10:47:23 by jdoffemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*cpy;
	int		i;
	int		s1_len;

	s1_len = ft_strlen(s1);
	cpy = malloc(sizeof(char) * (s1_len + 1));
	if (!cpy)
		return (0);
	i = 0;
	while (s1[i])
	{
		cpy[i] = s1[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

/*int   main()
{
    printf("ft_calloc :%s\n", ft_strdup("Bonjour"));
    printf("calloc :%s\n", strdup("Bonjour"));
}*/