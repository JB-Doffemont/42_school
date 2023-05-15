/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoffemo <jdoffemo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 15:58:52 by jdoffemo          #+#    #+#             */
/*   Updated: 2023/05/15 15:12:08 by jdoffemo         ###   ########.fr       */
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
		ft_putchar('u');
	else if (*(s + 1) == 'x' || *(s + 1) == 'X')
		ft_putchar('x');
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
	int		nb = -214748364;

	coucou = 'd';
	printf("%d", ft_printf("Num : %d", nb));
	printf("%d", printf("Num : %d", nb));
	return (0);
}
