/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checktetri.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gofernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/13 23:05:35 by gofernan          #+#    #+#             */
/*   Updated: 2017/12/15 19:03:55 by gofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

int checktetri(char *file)
{
	int i;
	int k;
	int y[4];
	int x[4];

	i = 0;
	k = 0;
	while (file[i] != '\0' && k < 4)
	{
		if (file[i] == '#')
		{
				y[k] = (i - (21 * ( i / 21))) / 5;
				x[k] = (i - (21 * ( i / 21))) % 5;
				k++;
		}
		i++;
	}
	/*k = 0;
	while (k < 4)
	{
		printf("%d ", y[k]);
		k++;
	}
	printf("\n");
	k = 0;
	while (k < 4)
	{
		printf("%d ", x[k]);
		k++;
	}
	printf("\n");*/
	return (1);
} 
