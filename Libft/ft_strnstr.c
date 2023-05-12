/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoffemo <jdoffemo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 13:18:20 by jdoffemo          #+#    #+#             */
/*   Updated: 2023/04/28 15:20:17 by jdoffemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	if (!(needle[i]))
		return ((char *)&(haystack[i]));
	while (i < len && haystack[i])
	{
		if (haystack[i] == needle[j])
		{
			k = i;
			while ((haystack[k] == needle[j]) && (needle[j] != '\0') && k < len)
			{
				j++;
				k++;
			}
			if (needle[j] == '\0')
				return ((char *)&(haystack[i]));
			j = 0;
		}
		i++;
	}
	return (NULL);
}
/*int   main()
{
    printf("ft_strnstr :%s\n", ft_strnstr("Bonjour", "jour", 5));
    
    printf("strnstr :%s", strnstr("Bonjour", "jour", 5));
}*/
