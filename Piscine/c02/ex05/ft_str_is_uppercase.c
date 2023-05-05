/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoffemo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 13:10:55 by jdoffemo          #+#    #+#             */
/*   Updated: 2023/02/06 13:24:46 by jdoffemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 0 && str[i] <= 64)
		{
			return (0);
		}
		else if (str[i] >= 91 && str[i] <= 127)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int main(void)
{
    char str[20] = "TE!{q:";

    ft_str_is_uppercase(str);
    return (0);
}*/
