/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoffemo <jdoffemo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 14:54:30 by jdoffemo          #+#    #+#             */
/*   Updated: 2023/05/03 13:29:10 by jdoffemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		len_s;
	char	*str;

	i = 0;
	len_s = ft_strlen(s1);
	if (*s1 == 0)
		return (ft_calloc(sizeof(char), 1));
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (s1[len_s - 1] && len_s > i && (ft_strchr(set, s1[len_s - 1])))
		len_s--;
	str = ft_calloc(sizeof(char), len_s - i + 1);
	if (!str)
		return (NULL);
	ft_strlcpy(str, &s1[i], len_s - i + 1);
	return (str);
}
/*int   main()
{
    printf("ft_strtrim :%s\n", ft_strtrim("Hello \t  Please\n Trim me !", " "));
}*/