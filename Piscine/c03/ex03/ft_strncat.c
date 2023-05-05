/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoffemo <jdoffemo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 20:33:49 by jdoffemo          #+#    #+#             */
/*   Updated: 2023/04/24 10:17:07 by jdoffemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	y;

	i = 0;
	y = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[y] && y < nb)
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
	char	dest[15] = "hel";
	char	src[15] = "world";
	char	dest2[15] = "bon";

	printf("%s\n", ft_strncat(dest, src, 0));
	printf("%s\n", strncat(dest2, src, 0));

	return(0);
}*/
