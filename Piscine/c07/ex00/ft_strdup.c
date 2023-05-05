/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoffemo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 10:01:10 by jdoffemo          #+#    #+#             */
/*   Updated: 2023/02/16 20:51:01 by jdoffemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		len_result;
	char	*cpy;

	len_result = ft_strlen(src);
	cpy = (char *)malloc(sizeof(char) * (len_result + 1));
	if (!cpy)
		return (0);
	i = 0;
	while (src[i])
	{
		cpy[i] = src[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

/*int	main(void)
{
	printf("La mienne :%s\n", ft_strdup("Je suis un test"));
	printf("La vrai :%s\n", strdup("Je suis un test"));
	return(0);
}*/
