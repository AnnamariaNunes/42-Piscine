/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aangelic <aangelic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 19:55:52 by aangelic          #+#    #+#             */
/*   Updated: 2023/02/08 20:08:36 by aangelic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stdio.h>
#include <unistd.h>

void	ft_converter(long int n, int len, char *base);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_check_base(char *base)
{
	int	i;
	int	j;

	i = -1;
	while (base[++i])
	{
		j = i + 1;
		if (base[i] == '-' || base[i] == '+')
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			len;
	long int	num;

	num = nbr;
	len = 0;
	while (base[len])
		len++;
	if (len <= 1)
		return ;
	if (!ft_check_base(base))
		return ;
	if (num < 0)
	{
		ft_putchar('-');
		num = -num;
	}
	ft_converter(num, len, base);
}

void	ft_converter(long int n, int len, char *base)
{
	if (n / len == 0)
	{
		ft_putchar(base[n % len]);
		return ;
	}
	else
	{
		ft_converter(n / len, len, base);
		ft_putchar(base[n % len]);
	}
}
// int		main(void)
// {
// 	// base binaria
// 	printf("Bases binarias, n = 47. \"01\" e \"\\/\"\n");
// 	ft_putnbr_base(47, "01");
// 	ft_putchar('\n');
// 	printf("Esperado: 101111\n");
// 	ft_putnbr_base(47, "\\/");
// 	ft_putchar('\n');
// 	printf("Esperado: /\\////\n");
// 	// base 5
// 	printf("Bases 5, n = 36. \"01345\" e \"sd2ek\"\n");
// 	ft_putnbr_base(36, "01345");
// 	ft_putchar('\n');
// 	printf("Esperado: 131\n");
// 	ft_putnbr_base(36, "sd2ek");
// 	ft_putchar('\n');
// 	printf("Esperado: d2d\n");
// 	// base 10
// 	printf("Bases 10, n = %d. \"0123456789\" e \",.;\\][{}@#\"\n", INT_MIN);
// 	ft_putnbr_base(INT_MIN, "0123456789");
// 	ft_putchar('\n');
// 	printf("Esperado: -2147483648\n");
// 	ft_putnbr_base(INT_MIN, ",.;\\][{}@#");
// 	ft_putchar('\n');
// 	printf("Esperado: -;.]}]@\\{]@\n");
// 	// base 16
// 	printf("Bases 16, n = -65040. \"0123456789ABCDEF\" e
// 	\"jdlskmnMKZxVuzfa\"\n");
// 	ft_putnbr_base(-65040, "0123456789ABCDEF");
// 	ft_putchar('\n');
// 	printf("Esperado: -FE10\n");
// 	ft_putnbr_base(-65040, "jdlskmnMKZxVuzfa");
// 	ft_putchar('\n');
// 	printf("Esperado: -afdj\n");
// 	// base 0 e base 1, nao pode aparecer nada
// 	printf("Bases 0 e 1, nao deve aparecer nada, n = 256.\n");
// 	ft_putnbr_base(-29092, "0");
// 	ft_putnbr_base(-29092, "");
// 	return (0);
// }
