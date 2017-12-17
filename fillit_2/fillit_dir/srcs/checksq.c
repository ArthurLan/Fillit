/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isvalid2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gofernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/13 17:11:12 by gofernan          #+#    #+#             */
/*   Updated: 2017/12/17 12:15:27 by alanter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

int checksq(char *file)
{
	
	//int i;
	//int countsharp;
	int filelen;
	//int a;

	//i = 0;
	//a = 1;
	//countsharp = 0;
	filelen = ft_strlen(file);
	ft_putstr(file);
	ft_putnbr(filelen);
	if ((filelen < 20) || ((filelen > 20) && ((filelen + 1) % 21 != 0)))
		return (0);
	/*
	while (file[i] != '\0')
	{
		if (i % 21 == 0 && i != 0)
			a--;
		if (((i + a) % 5 == 0) || ((i + 1) % 21  == 0))
		{
			if (file[i] != '\n')
				return (0);
		}
		else if (file[i] != '#' && file[i] != '.')
			return (0);
		else if (file[i] == '#')
			countsharp++;
		if (((i == 18) || (i % 21 == 18 )) && (countsharp % 4 != 0))
				return (0);
		i++;
	}
	*/
	if (file)
		;
	return (1);
}
