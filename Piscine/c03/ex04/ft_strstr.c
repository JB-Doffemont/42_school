/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoffemo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 21:09:57 by jdoffemo          #+#    #+#             */
/*   Updated: 2023/02/09 15:53:16 by jdoffemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	if (!(to_find[i]))
		return (str);
	while (str[i])
	{
		if (str[i] == to_find[j])
		{
			k = i;
			while ((str[k] == to_find[j]) && (to_find[j] != '\0'))
			{
				k++;
				j++;
			}
			if (to_find[j] == '\0')
				return (str + i);
			j = 0;
		}
		i++;
	}
	return (0);
}

/*int   main(void)
{
    char    str[] = "Je susssis une string";
    char    to_find[] = "s ";

        printf("%s\n", ft_strstr(str, to_find));

        printf("%s\n", strstr(str, to_find));
    return (0);
}*/
