/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aangelic <aangelic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 12:04:35 by aangelic          #+#    #+#             */
/*   Updated: 2023/02/14 12:04:59 by aangelic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_str_lenght(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	i = 0;
	dest = (char *)malloc(ft_str_lenght(src) * sizeof(char) + 1);
	if (!dest)
		return (0);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
// int		main(void)
// {
// 	char	*str;
// 	char	*str_copy;

// 	str = "Test string.";
// 	str_copy = ft_strdup(str);
// 	if (strcmp(str, str_copy) != 0)
// 		printf("KO, string is not the same.\n");
// 	else
// 		printf("OK.\n");
// 	str = "";
// 	str_copy = ft_strdup(str);
// 	if (strcmp(str, str_copy) != 0)
// 		printf("KO, string is not the same.\n");
// 	else
// 		printf("OK.\n");
// 	str = "eeeeeeee vida de gado";
// 	str_copy = ft_strdup(str);
// 	if (strcmp(str, str_copy) != 0)
// 		printf("KO, string is not the same.\n");
// 	else
// 		printf("OK.\n");
// 	return (0);
// }
