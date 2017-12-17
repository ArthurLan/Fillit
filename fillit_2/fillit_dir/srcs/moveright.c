/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moveright.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/13 11:29:18 by alanter           #+#    #+#             */
/*   Updated: 2017/12/13 13:33:15 by alanter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	moveright(t_lksquare square)
{
	int		countbox;
	int		i;
	int		j;
	char	**box;

	countbox = 0;
	box = square.square;
	i = square.ilast;
	j = square.squaresize;
	while (countbox < 4)
		if (box[i][j] == square.tetriletter)
		{
			box[i][j] = '.';
			
		}
}
