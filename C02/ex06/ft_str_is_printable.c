/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aangelic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 12:52:40 by aangelic          #+#    #+#             */
/*   Updated: 2023/02/06 12:55:34 by aangelic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
		{
			return (0);
		}
	i++;
	}
	return (1);
}
// int main ()
// {
//   printf("%d" , ft_str_is_printable("\n\t\t"));
//   printf("\n%d" , ft_str_is_printable("JFHSJFHJDSF%"));
//   printf("\n%d" , ft_str_is_printable("1213564$"));
// }
