/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoffemo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 15:44:47 by jdoffemo          #+#    #+#             */
/*   Updated: 2023/02/20 18:43:20 by jdoffemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_len(char	**strs, char *sep, int size)
{
	int	len_result;
	int	i;

	i = 0;
	len_result = 0;
	while (i < size)
	{
		len_result = len_result + ft_strlen(strs[i]);
		i++;
	}
	len_result = len_result + ft_strlen(sep) * (size - 1);
	return (len_result);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*dest;

	if (size == 0)
		return (malloc(sizeof(char)));
	dest = malloc(sizeof(char) * (ft_len(strs, sep, size) + 1));
	if (!dest)
		return (0);
	*dest = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(dest, strs[i]);
		if (i < size - 1)
			ft_strcat(dest, sep);
		i++;
	}
	return (dest);
}

/*int	main()
{
		char	*tab[] = {
		"fdsgerg", "ghsh", "gewg"
		};
		printf("%s", ft_strjoin(3, tab, "||**||"));
	return (0);
}*/
