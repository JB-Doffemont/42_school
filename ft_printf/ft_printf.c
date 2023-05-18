/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoffemo <jdoffemo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 15:58:52 by jdoffemo          #+#    #+#             */
/*   Updated: 2023/05/18 16:46:37 by jdoffemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
		len += ft_convert_param(va_arg(va, void *));
	else if (*(s + 1) == 'u')
		len += ft_putnbr_unint(va_arg(va, unsigned int));
	else if (*(s + 1) == 'x' || *(s + 1) == 'X')
		len += ft_putnbr_base(va_arg(va, unsigned int), *(s + 1));
	else if (*(s + 1) == '%')
		len += ft_putchar('%');
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

/*int	main(void)
{
	char	coucou;
	char	str[] = "";
	unsigned int		nb = -4560;

	coucou = 'd';
	printf("\n%d\n", ft_printf("Num : %x\n", nb));
	printf("\n%d\n", printf("Num : %x\n", nb));
	return (0);
}*/
