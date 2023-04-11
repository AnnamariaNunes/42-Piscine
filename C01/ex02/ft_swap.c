/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aangelic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 09:40:46 by aangelic          #+#    #+#             */
/*   Updated: 2023/02/02 09:40:49 by aangelic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
// int main (void)
// {
//   int a = 20;
//   int b = 40;

//   ft_swap(&a,&b);
//   printf("Number: %d\n", a);
//   printf("Number: %d\n", b);
// }
