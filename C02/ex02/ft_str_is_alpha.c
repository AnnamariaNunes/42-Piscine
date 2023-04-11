/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aangelic <aangelic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 17:55:44 by aangelic          #+#    #+#             */
/*   Updated: 2023/02/06 14:38:13 by aangelic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a'
				&& str[i] <= 'z'))
			i++;
		else
			return (0);
	}
	return (1);
}
// int	main(void)
// {
// 	printf("%d", ft_str_is_alpha("abcdefgded"));
// 	printf("\n%d", ft_str_is_alpha("ab1332cdefgded"));
// 	printf("\n%d", ft_str_is_alpha(""));
// }
