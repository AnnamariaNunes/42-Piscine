/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aangelic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 19:15:58 by aangelic          #+#    #+#             */
/*   Updated: 2023/02/08 19:16:00 by aangelic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>



int main(int argc, char  **argv)
{
	int i;

	i = 0;
	if(argc > 1)
	{
		argc--;
		while(argv[argc][i])
		{
			write(1,&argv[argc][i], 1);
			i++;
		}
		
	}
	write(1,"\n", 1);
	return(0);
}
