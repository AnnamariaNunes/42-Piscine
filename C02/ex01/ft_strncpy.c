/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aangelic <aangelic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 17:54:21 by aangelic          #+#    #+#             */
/*   Updated: 2023/02/06 14:13:37 by aangelic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
	dest[i] = '\0';
	i++;
	}
	return (dest);
}
// int main ()
// {
//   char src[] = "Hello";
//   char dest[] = "World";
//   char dest1[] ="World2";

//   printf("%s", ft_strncpy(dest,src,3));
//   printf("\n%s", ft_strncpy(dest1,src,3));
//   printf("\n%s", ft_strncpy(dest,src,5));
// }
