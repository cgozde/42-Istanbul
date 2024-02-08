/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cuyar <cuyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 15:14:44 by cuyar             #+#    #+#             */
/*   Updated: 2024/02/08 18:06:50 by cuyar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	arg;
	int		len;

	va_start(arg, str);
	len = 0;
	while (*str)
	{
		if (*str == '%')
		{
			len += ft_control(arg, *(++str));
			str++;
		}
		else
		{
			len += ft_putchar(*str);
			str++;
		}
	}
	va_end (arg);
	return (len);
}

int	ft_control(va_list arg, char c)
{
	int	len;

	len = 0;
	if (c == 'c')
		len += ft_putchar(va_arg(arg, int));
	else if (c == 's')
		len += ft_putstr(va_arg(arg, char *));
	else if (c == 'd' || c == 'i')
		len += ft_putnbr(va_arg(arg, int));
	else if (c == 'u')
		len += ft_putnbr(va_arg(arg, unsigned int));
	else if (c == 'x')
		len += ft_hexadecimal(va_arg(arg, unsigned int), "0123456789abcdef");
	else if (c == 'X')
		len += ft_hexadecimal(va_arg(arg, unsigned int), "0123456789ABCDEF");
	else if (c == 'p')
	{
		len += write(1, "0x", 2);
		len += ft_hexadecimal(va_arg(arg, unsigned long), "0123456789abcdef");
	}
	else if (c == '%')
		len += ft_putchar('%');
	return (len);
}
