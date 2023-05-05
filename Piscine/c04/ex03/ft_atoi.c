/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoffemo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 08:30:06 by jdoffemo          #+#    #+#             */
/*   Updated: 2023/02/10 09:57:56 by jdoffemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_isspace(char c)
{
	int	i;

	i = 0;
	if ((c == '\t') || (c == '\n') || (c == '\v') || \
			(c == '\f') || (c == ' ') || (c == '\r'))
	{
		return (1);
	}
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	j;
	int	nbr;

	i = 0;
	j = 0;
	nbr = 0;
	while (str[i] && ft_isspace(str[i]) == 1)
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			j++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = nbr * 10 + str[i] - 48;
		i++;
	}
	if (j % 2 == 1)
		nbr *= -1;
	return (nbr);
}

/*int main(void)
{
    char    str[] = "  -+--+1254sd23";

    printf("%d", ft_atoi(str));

 //   printf("%d", atoi(str));
    return (0);
}*/
