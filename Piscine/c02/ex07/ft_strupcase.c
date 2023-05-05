/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoffemo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 14:40:28 by jdoffemo          #+#    #+#             */
/*   Updated: 2023/02/06 16:36:44 by jdoffemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str [i] <= 122)
		{
			str[i] = str[i] -32;
		}
		i++;
	}	
	return (str);
}

/*int main(void)
{
	char *str;
	   
	str = "test";
	ft_strupcase(str);
	printf("%s", str);
	return (0);
}*/
