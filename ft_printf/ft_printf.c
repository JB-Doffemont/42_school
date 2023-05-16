/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoffemo <jdoffemo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 15:58:52 by jdoffemo          #+#    #+#             */
/*   Updated: 2023/05/16 15:46:55 by jdoffemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_strcheck(char *s, va_list va)
{
	int	len;

	len = 0;
	if (*(s + 1) == 'c')
		len += ft_putchar(va_arg(va, int));
	else if (*(s + 1) == 's')
		len += ft_putstr(va_arg(va, char *));
	else if (*(s + 1) == 'i' || *(s + 1) == 'd')
		len += ft_putnbr(va_arg(va, int));
	else if (*(s + 1) == 'p')
		ft_putchar('p');
	else if (*(s + 1) == 'u')
		ft_putnbr_unint('u');
	else if (*(s + 1) == 'x' || *(s + 1) == 'X')
		len += ft_putnbr_base(va_arg(va, long long int), *(s + 1));
	else if (*(s + 1) == '%')
		ft_putchar('%');
		//ft_print_percent();
	return (len);
}

int	ft_printf(const char *format, ...)
{
	int		len;
	va_list	va;

	va_start(va, format);
	len = 0;
	while (*format)
	{
		if (*format == '%')
		{
			len += ft_strcheck((char *)format, va);
			format++;
		}
		else
			len += ft_putchar((char)*format);
		format++;
	}
	va_end(va);
	return (len);
}

int	main(void)
{
	char	coucou;
	char	str[] = "YOLO";
	unsigned int		nb = -65535;

	coucou = 'd';
	//printf("\n%d\n", ft_printf("Num : %X\n", nb));
	printf("\n%d\n", printf("Num : %u\n", nb));
	return (0);
}
