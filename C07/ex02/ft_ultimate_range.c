/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aangelic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 12:22:51 by aangelic          #+#    #+#             */
/*   Updated: 2023/02/14 12:22:53 by aangelic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	bound;
	int	i;
	int	*buffer;

	if (min >= max)
	{
		return (0);
	}
	bound = max - min;
	buffer = malloc(bound * sizeof(int));
	if (!buffer)
	{
		return (-1);
	}
	*range = buffer;
	i = 0;
	while (i < bound)
	{
		buffer[i] = min + i;
		i++;
	}
	return (bound);
}
// int	main(void)
// {
// 	int min;
// 	int max;
// 	int *tab;
// 	int i;
// 	int size;

// 	i = 0;
// 	max = 10;
// 	min = 5;
// 	size = ft_ultimate_range(&tab, min, max);

// 	while (i < size)
// 	{
// 		printf("%d, ", tab[i]);
// 		i++;
// 	}
// }
