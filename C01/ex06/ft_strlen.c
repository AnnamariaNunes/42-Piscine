/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aangelic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 09:58:10 by aangelic          #+#    #+#             */
/*   Updated: 2023/02/02 09:58:13 by aangelic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

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
// int	main(void)
// {
// 	char 	*str = "42 is amazing bro";
// 	int		size;

// 	size = ft_strlen(str);
// 	printf("str=\"%s\"\nstrlen=%d\n", str, size);
// 	return (0);
// }
