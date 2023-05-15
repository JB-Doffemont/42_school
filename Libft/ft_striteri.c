/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoffemo <jdoffemo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 14:57:10 by jdoffemo          #+#    #+#             */
/*   Updated: 2023/05/06 15:03:25 by jdoffemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int unsigned	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
