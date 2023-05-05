/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoffemo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 12:58:02 by jdoffemo          #+#    #+#             */
/*   Updated: 2023/02/06 13:06:06 by jdoffemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 0 && str[i] <= 96)
		{
			return (0);
		}
		else if (str[i] >= 123 && str[i] <= 127)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int main(void)
{
    char str[20] = "test";

    ft_str_is_lowercase(str);
    return (0);
}*/
