/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aangelic <aangelic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 17:58:19 by aangelic          #+#    #+#             */
/*   Updated: 2023/02/06 14:14:19 by aangelic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 48 && str[i] <= 57)
			i++;
		else
			return (0);
	}
	return (1);
}
// int main()
// {
//   printf("%d",ft_str_is_numeric("012345678"));
//   printf("\n%d",ft_str_is_numeric("a1f3h5678"));
//   printf("\n%d",ft_str_is_numeric("s1fg345678"));
// }
