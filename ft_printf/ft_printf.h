/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoffemo <jdoffemo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 15:07:58 by jdoffemo          #+#    #+#             */
/*   Updated: 2023/05/18 16:46:09 by jdoffemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>

int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putnbr(int nb);
int	ft_putnbr_base(unsigned int nb, char c);
int	ft_putnbr_unint(unsigned int nb);
int	ft_putaddress(unsigned long nb);
int	ft_convert_param(void *param);
int	ft_strcheck(char *s, va_list va);
int	ft_printf(const char *format, ...);

#endif
