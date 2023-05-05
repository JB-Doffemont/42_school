/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoffemo <jdoffemo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 19:08:33 by jdoffemo          #+#    #+#             */
/*   Updated: 2023/04/24 10:15:48 by jdoffemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	y;

	i = 0;
	y = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[y])
	{
		dest[i] = src[y];
		y++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int main(void)
{
	char	dest[15] = "";
	char	src[15] = "world";
	char	dest2[15] = "";

	printf("%s\n", ft_strcat(dest, src));
	printf("%s\n", strcat(dest2, src));

	return(0);
}*/
