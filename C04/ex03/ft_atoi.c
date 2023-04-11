/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aangelic <aangelic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 19:21:36 by aangelic          #+#    #+#             */
/*   Updated: 2023/02/11 19:56:31 by aangelic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	whitespaces(char *str, int *ptr_i)
{
	int	i;
	int	count;

	i = 0;
	count = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while ((str[i] == 43) || (str[i] == 45))
	{
		if (str[i] == 45)
			count *= -1;
		i++;
	}
	*ptr_i = i;
	return (count);
}

int	ft_atoi(char *str)
{
	int	sign;
	int	resp;
	int	i;

	resp = 0;
	sign = whitespaces (str, &i);
	while (str[i] && str[i] >= 48 && str[i] <= 57)
	{
		resp *= 10;
		resp += str[i] - 48;
		i++;
	}
	resp *= sign;
	return (resp);
}
int main (void)
{
  char *s = "    ---+--+01234456789ab567";
  printf("%d", ft_atoi(s));
}
