/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoffemo <jdoffemo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 13:10:05 by jdoffemo          #+#    #+#             */
/*   Updated: 2023/05/12 11:07:08 by jdoffemo         ###   ########.fr       */
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

static char	*ft_create_tab(char *src, int n, int sign)
{
	int		i;
	int		j;
	char	temp;

	i = 0;
	temp = '\0';
	while (n > 0)
	{
		src[i++] = n % 10 + 48;
		n = n / 10;
	}
	if (sign == 1)
		src[i++] = '-';
	src[i] = '\0';
	j = 0;
	while (j < i)
	{
		temp = src[i - 1];
		src[i - 1] = src[j];
		src[j] = temp;
		i--;
		j++;
	}
	return (src);
}

char	*ft_itoa(int n)
{
	int			i;
	int			sign;
	char		*str;

	i = 0;
	sign = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		n *= -1;
		sign = 1;
	}
	str = ft_calloc((ft_count_digits(n) + 1 + sign), sizeof(char));
	if (!str)
		return (NULL);
	if (n == 0)
	{
		str[i] = 48;
		return (str);
	}
	ft_create_tab(str, n, sign);
	return (str);
}

/*int	main(void)
{
	char *str = ft_itoa(-10);
	printf("%s\n", str);
	return (0);
}*/