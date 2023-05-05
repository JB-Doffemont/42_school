/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoffemo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 10:44:45 by jdoffemo          #+#    #+#             */
/*   Updated: 2023/02/16 12:28:43 by jdoffemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	size;
	int	*result;

	result = (int *)malloc(sizeof(int) * (max - min));
	if (min >= max || !(result))
	{
		return (0);
	}
	i = 0;
	size = max - min;
	while (i < size)
	{
		result[i] = min++;
		i++;
	}
	return (result);
}

/*int main(void)
{
	ft_range(-10, -5);
    return (0);
}*/
