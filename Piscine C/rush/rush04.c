/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cuyar <cuyar@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 17:10:03 by cuyar             #+#    #+#             */
/*   Updated: 2023/09/06 14:51:50 by cuyar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char n);

void	rush(int x, int y)
{
	int	x_n;
	int	y_n;

	if (x < 1 || y < 1)
		return ;
	y_n = 1;
	while (y_n <= y)
	{
		x_n = 1;
		while (x_n <= x)
		{
			if ((x_n == 1 && y_n == 1) 														|| (x_n == x && y_n == y && y != 1 && x != 1))		
				ft_putchar ('A');
			else if ((x_n == x && y_n == 1) || (x_n == 1 && y_n == y))
				ft_putchar('C');
			else if ((x_n < x && x_n > 1) && (y_n < y && y_n > 1))
				ft_putchar(' ');
			else
				ft_putchar('B');
			x_n++;
		}
		ft_putchar('\n');
		y_n++;
	}
}
