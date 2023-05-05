/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoffemo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 14:10:28 by jdoffemo          #+#    #+#             */
/*   Updated: 2023/02/06 14:36:42 by jdoffemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 0 && str[i] <= 31)
		{
			return (0);
		}
		else if (str[i] == 127)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int main(void)
{
    char str[] = {76};

    ft_str_is_printable(str);
    return (0);
}*/
