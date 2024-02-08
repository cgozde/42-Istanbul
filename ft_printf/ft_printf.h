/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cuyar <cuyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 15:15:04 by cuyar             #+#    #+#             */
/*   Updated: 2024/02/08 17:06:19 by cuyar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

int	ft_pustr(char *s);
int	ft_putchar(char c);
int	ft_control(va_list arg, char c);
int	ft_putnbr(long n);
int	ft_hexadecimal(unsigned long a, char *s);
int	ft_printf(const char *str, ...);
#endif