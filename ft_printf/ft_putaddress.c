/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddress.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoffemo <jdoffemo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 10:31:54 by jdoffemo          #+#    #+#             */
/*   Updated: 2023/05/18 12:37:10 by jdoffemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_convert_param(void *param)
{
	int				i;
	unsigned long	nb;

	nb = (unsigned long)param;
	i = ft_putaddress(nb);
	return (i);
}

int	ft_putaddress(unsigned long nb)
{
	int					i;
	char				*base;

	i = 1;
	base = "0123456789abcdefg";
	if (nb >= 16)
	{
		i += ft_putaddress(nb / 16);
		ft_putchar(base[nb % 16]);
	}
	else
	{
		ft_putstr("0x");
		i += 2;
		ft_putchar(base[nb % 16]);
	}
	return (i);
}
