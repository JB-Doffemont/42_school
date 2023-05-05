/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoffemo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 12:17:04 by jdoffemo          #+#    #+#             */
/*   Updated: 2023/02/05 16:52:53 by jdoffemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_strlen(char *str)
{
	int	i;
	int	nb_char;

	i = 0;
	nb_char = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	nb_char = i;
	return (nb_char);
}

/*int	main(void)
{
	char	*str;

	str = "Chaine de carateres";

	ft_strlen(str);
	
	return (0);
}*/
