/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aangelic <aangelic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 10:09:25 by aangelic          #+#    #+#             */
/*   Updated: 2023/01/30 11:10:43 by aangelic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char value)
{
	write(1, &value, 1);
}

void	ft_display(int value)
{
	int	x;
	int	y;

	if (value > 9)
	{
		x = value / 10;
		y = value % 10;
		ft_putchar(x + '0');
		ft_putchar(y + '0');
	}
	else
	{
		ft_putchar('0');
		ft_putchar(value + 48);
	}
}

void	ft_result(int x, int y)
{
	ft_display(x);
	ft_putchar(' ');
	ft_display(y);
	if (x < 98 || y < 99)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	while (x <= 99)
	{
		y = x + 1;
		while (y <= 99)
		{
			ft_result(x, y);
			y++;
		}
		x++;
	}
}

int main (void)
{
ft_print_comb2();
}

