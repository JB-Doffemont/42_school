/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoffemo <jdoffemo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 15:52:56 by jdoffemo          #+#    #+#             */
/*   Updated: 2023/05/18 16:45:32 by jdoffemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(unsigned int nb, char c)
{
	int		i;
	char	*base;

	i = 1;
	if (c == 'x')
		base = "0123456789abcdefg";
	else
		base = "0123456789ABCDEFG";
	if (nb < 0)
	{
		nb *= -1;
		ft_putchar('-');
		i += 1;
	}
	if (nb >= 16)
	{
		i += ft_putnbr_base(nb / 16, c);
		ft_putchar(base[nb % 16]);
	}
	else
		ft_putchar(base[nb % 16]);
	return (i);
}
