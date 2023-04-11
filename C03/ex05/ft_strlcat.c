/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aangelic <aangelic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 12:30:54 by aangelic          #+#    #+#             */
/*   Updated: 2023/02/08 09:30:17 by aangelic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	y;
	unsigned int	dest_len;
	unsigned int	src_len;

	i = 0;
	y = 0;
	while (dest[y] != '\0')
	{
		y++;
	}
	dest_len = y;
	src_len = ft_strlen(src);
	if (size == 0 || size <= dest_len)
		return (src_len + size);
	while (src[i] != '\0' && i < size - dest_len -1)
	{
		dest[y] = src[i];
		i++;
		y++;
	}
	dest[y] = '\0';
	return (dest_len + src_len);
}
// int main ()
// {
//   char src[] = "ABCDEF";
//   char dest [] = "123";

//   printf("Result: %i\n", ft_strlcat(dest,src,10));
//   printf("%s\n", dest);
// }
