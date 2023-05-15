/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoffemo <jdoffemo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 13:10:05 by jdoffemo          #+#    #+#             */
/*   Updated: 2023/05/05 15:38:35 by jdoffemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_count_digits(int n)
{
	int		count;

	count = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}	
char	*ft_reverse_tab(n)
{
	int		i;
	char	*src;
	char	*dst;
	int		nb_char;

	i = 0;
	nb_char = ft_count_digits(n);
	while (i < nb_char)
	{
		src[i] = n % 10 + 48;
		n = n / 10;
		i++;
	}
	src[i] = '\0';
}

char	*ft_itoa(int n)
{
	int		i;
	int		sign;
	char	*str;
			
	i = 0;
	sign = 0;
	str = ft_calloc((ft_count_digits(n) + 1 + sign), sizeof(char));
	if (!str)
		return (NULL);
	return (str);
}

int	main(void)
{
	char	*str = ft_itoa(156);
	printf("%s\n", str);
	return (0);
}