/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aangelic <aangelic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 13:32:13 by aangelic          #+#    #+#             */
/*   Updated: 2023/02/15 18:29:55 by aangelic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		src_l;
	int		i;
	char	*dest;

	src_l = ft_strlen(src);
	i = -1;
	dest = (char *)malloc(src_l + 1);
	if (!dest)
		return (0);
	while (src[++i])
		dest[i] = src[i];
	dest[i] = 0;
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*res;

	i = -1;
	res = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!res)
		return (0);
	while (++i < ac)
	{
		res[i].size = ft_strlen(av[i]);
		res[i].str = av[i];
		res[i].copy = ft_strdup(av[i]);
	}
	res[i].str = 0;
	res[i].copy = 0;
	return (res);
}

#include "ft_stock_str.h"
#include <stdio.h>

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);

int	main()
{
	char	*strings[] = {"string1", "string2", "stringmuitomaior1", "fim", "", "loucura", "issae"};
	struct s_stock_str *tab = ft_strs_to_tab(7, strings);
	struct s_stock_str *it = tab;

	tab[1].copy[3] = 'o';
	tab[3].copy[0] = 'S';

	while (it->str != 0)
	{
		printf("%s\n", it->str);
		printf("%i\n", it->size);
		printf("%s\n", it->copy);
		++it;
	}
}