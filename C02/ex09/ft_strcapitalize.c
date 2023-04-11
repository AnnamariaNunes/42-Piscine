/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aangelic <aangelic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 13:01:23 by aangelic          #+#    #+#             */
/*   Updated: 2023/02/06 14:24:35 by aangelic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_low(char ch)
{
	return (ch >= 'a' && ch <= 'z');
}

int	is_up(char ch)
{
	return (ch >= 'A' && ch <= 'Z');
}

int	is_digit(char ch)
{
	return (ch >= '0' && ch <= '9');
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + ('a' - 'A');
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (i == 0)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - ('a' - 'A');
			}
		}
		if (is_low(str[i - 1]) || is_up(str[i - 1]) || is_digit(str[i - 1]))
			;
		else if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - ('a' - 'A');
		i++;
	}
	return (str);
}
// int main()
// {
// 	char str[] = "ola, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
// 	printf("%s",ft_strcapitalize(str));
// }