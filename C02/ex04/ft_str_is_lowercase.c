/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aangelic <aangelic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 18:06:07 by aangelic          #+#    #+#             */
/*   Updated: 2023/02/06 14:29:44 by aangelic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			i++;
		else
			return (0);
	}
	return (1);
}
// int main ()
// {
//   printf("%d", ft_str_is_lowercase("abcdefged"));
//   printf("%d", ft_str_is_lowercase("abDDeFfged"));
//   printf("%d", ft_str_is_lowercase("ab12defged"));
//   printf("%d", ft_str_is_lowercase(""));
// }
