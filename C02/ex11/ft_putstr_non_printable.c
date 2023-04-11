/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aangelic <aangelic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 13:07:38 by aangelic          #+#    #+#             */
/*   Updated: 2023/02/06 14:24:38 by aangelic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_char_is_printable(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

void	ft_putstr_non_printable(char *str)
{
	int				i;
	unsigned char	ch;

	i = 0;
	while (str[i] != '\0')
	{
		ch = str[i];
		if (ft_char_is_printable(str[i]) == 1)
			ft_putchar(str[i]);
		else
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[ch / 16]);
			ft_putchar("0123456789abcdef"[ch % 16]);
		}
		i++;
	}
}
// int main (void)
// {
//     ft_putstr_non_printable("Ol\ncomo vai");
//     ft_putchar('\n');
//     ft_putstr_non_printable("Hello Worl\t\v\0d");
//     ft_putchar('\n');
//     ft_putstr_non_printable("");
// }
