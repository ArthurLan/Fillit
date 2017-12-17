/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printsq.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 22:13:58 by alanter           #+#    #+#             */
/*   Updated: 2017/12/13 13:32:45 by alanter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../includes/fillit.h"

void	printsq(t_lksquare sqtoprt)
{
	    int    i;
		int    j;
		char    **square;

		j = sqtoprt.squaresize;
		i = 0;
		square = sqtoprt.square;
		while (i < j )
		{
			ft_putstr(square[i]);
			ft_putstr("\n");
			i++;
		}
}
