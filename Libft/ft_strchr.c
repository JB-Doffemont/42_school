/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoffemo <jdoffemo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 15:08:09 by jdoffemo          #+#    #+#             */
/*   Updated: 2023/05/03 14:44:48 by jdoffemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
			return ((char *)&(s[i]));
		i++;
	}
	if (s[i] == (unsigned char)c)
	{
		return ((char *)&(s[i]));
	}
	return (NULL);
}

/*int	main(void)
{
	printf("%s\n", ft_strchr("abcde", '\0'));
	printf("%s\n", strchr("abcde", '\0'));
	return (1);
}*/
