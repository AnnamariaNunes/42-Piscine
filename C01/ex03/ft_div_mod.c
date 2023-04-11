/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aangelic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 09:47:12 by aangelic          #+#    #+#             */
/*   Updated: 2023/02/02 09:47:14 by aangelic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
// int main ()
// {
//     int a =28;
//     int b = 10;
//     int d = (a/b);
//     int m = a % b;

//     int *div = &d;
//     int *mod = &m;

//     ft_div_mod (a, b, div, mod);
//     printf ("A:%i  B:%i  *div:%i  *mod:%i\n", a, b, *div, *mod);
// }
