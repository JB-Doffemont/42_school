/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoffemo <jdoffemo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 11:06:15 by jdoffemo          #+#    #+#             */
/*   Updated: 2023/05/02 12:43:34 by jdoffemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	while (i >= 0)
	{
		if (s[i] == (unsigned char)(c))
			return ((char *)&(s[i]));
		i--;
	}
	return (NULL);
}

/*int	main(void)
{
	printf("%s\n", ft_strrchr("acbcde", 'c'));
	printf("%s\n", strrchr("acbcde", 'c'));
	return (1);
}*/
