/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoffemo <jdoffemo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 13:24:26 by jdoffemo          #+#    #+#             */
/*   Updated: 2023/05/18 12:36:46 by jdoffemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nb)
{
	int	i;

	i = 1;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		i = 11;
		return (i);
	}
	if (nb < 0)
	{
		nb *= -1;
		ft_putchar('-');
		i += 1;
	}
	if (nb > 9)
	{
		i += ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
	else
		ft_putchar(nb + '0');
	return (i);
}
