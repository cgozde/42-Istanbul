/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cuyar <cuyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 17:07:05 by cuyar             #+#    #+#             */
/*   Updated: 2024/02/08 17:18:31 by cuyar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_putnbr(long n)
{
	long	len;

	len = 0;
	if (n < 0)
	{
		len++;
		n *= -1;
		ft_putchar('-');
	}
	if (n > 9)
	{
		len += ft_putnbr(n / 10);
		len += ft_putnbr(n % 10);
	}
	else
		len += ft_putchar(n + '0');
	return (len);
}

int	ft_hexadecimal(unsigned long a, char *s)
{
	int	len;

	len = 0;
	if (a > 15)
	{
		len += ft_hexadecimal(a / 16, s);
	}
	len += ft_putchar(s[a % 16]);
	return (len);
}

int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	if (!s)
	{
		s = "(null)";
	}
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
	return (i);
}
