/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoffemo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 16:46:43 by jdoffemo          #+#    #+#             */
/*   Updated: 2023/02/06 16:52:17 by jdoffemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str [i] <= 90)
		{
			str[i] = str[i] +32;
		}
		i++;
	}
	return (str);
}
/*int main(void)
{
    char str[] = "TEST";
    ft_strlowcase(str);
    printf("%s", str);
    return (0);
}*/
