/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aangelic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 09:49:33 by aangelic          #+#    #+#             */
/*   Updated: 2023/02/02 09:49:36 by aangelic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a / *b;
	*b = *a % *b;
	*a = temp;
}
// int main()
// {
//   int a = 30;
//   int b = 20;

//   ft_ultimate_div_mod(&a,&b);

//   printf("A:%d\n",a);
//   printf("B:%d\n",b);
// }
