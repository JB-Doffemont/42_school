/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoffemo <jdoffemo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 13:54:42 by jdoffemo          #+#    #+#             */
/*   Updated: 2023/05/02 14:52:42 by jdoffemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	int		len;

	if (!s1 && !s2)
		return (ft_calloc(sizeof(char), 0));
	len = (ft_strlen(s1) + ft_strlen(s2)) + 1;
	s3 = ft_calloc(sizeof(char), (len));
	if (!s3)
		return (0);
	ft_strlcat(s3, (char *)s1, len);
	ft_strlcat(s3, (char *)s2, len);
	return (s3);
}

/*int   main()
{
    printf("ft_strjoin :%s\n", ft_strjoin("Bonjour", "toto"));
}*/