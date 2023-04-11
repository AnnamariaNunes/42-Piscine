/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aangelic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 18:08:01 by aangelic          #+#    #+#             */
/*   Updated: 2023/02/05 18:08:03 by aangelic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			i++;
		else
			return (0);
	}
	return (1);
}
// int main ()
// {
//   printf("%d", ft_str_is_uppercase("ABCDEFGHG"));
//   printf("%d", ft_str_is_uppercase("abDDeFfged"));
//   printf("%d", ft_str_is_uppercase("ab12defged"));
//   printf("%d", ft_str_is_uppercase(""));

// }
