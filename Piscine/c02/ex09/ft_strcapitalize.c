/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoffemo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 16:55:56 by jdoffemo          #+#    #+#             */
/*   Updated: 2023/02/07 15:14:50 by jdoffemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[0] >= 97 && str[0] <= 122)
		{
				str[0] = str[0] -32;
		}
		if ((str[i] >= 0 && str[i] <= 47) || (str[i] >= 58 && str[i] <= 64) \
		|| (str[i] >= 91 && str[i] <= 96) || (str[i] >= 123 && str[i] <= 127))
		{	
			if (str[i + 1] >= 97 && str[i + 1] <= 122)
			{
				str[i + 1] = str[i + 1] -32;
			}
		}
	i++;
	}
	return (str);
}
/*int main(void)
{
    char    str[] = "5:walut, #comment tu vas ? 42mots quarante-deux; cinquante";
    ft_strcapitalize(str);
    printf("%s", str);
    return (0);
}*/
