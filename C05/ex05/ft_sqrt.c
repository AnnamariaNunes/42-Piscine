/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aangelic <aangelic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 19:30:00 by aangelic          #+#    #+#             */
/*   Updated: 2023/02/12 15:04:34 by aangelic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	long	i;

	i = 1;
	if (nb <= 0)
	{
		return (0);
	}
	while (i * i < nb)
		i++;
	if (i * i == nb)
		return (i);
	return (0);
}

// int	main(void)
// {
// 	printf("%d", ft_sqrt(9));
// }
