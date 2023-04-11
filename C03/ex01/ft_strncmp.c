/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aangelic <aangelic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 12:17:17 by aangelic          #+#    #+#             */
/*   Updated: 2023/02/07 17:42:31 by aangelic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned char	c1;
	unsigned char	c2;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n && s1[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	if (i == n)
		i--;
	c1 = s1[i];
	c2 = s2[i];
	return (c1 - c2);
}
// int main ()
// {
//   char s1[] = "Moranga";
//   char s2[] = "Morango";
//   int n = 7;
//   printf("%d",ft_strncmp(s1,s2,n));
// }
