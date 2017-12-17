/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initializesq.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 21:40:25 by alanter           #+#    #+#             */
/*   Updated: 2017/12/13 13:32:49 by alanter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	initializesq(t_lksquare fstsq)
{
	int		i;
	int		j;
	char	**square;

	j = fstsq.squaresize;
	i = 0;
	square = fstsq.square;
	while (i < j)
	{
		square[i] = ft_memalloc(j + 1);
		ft_memset(square[i], '.', j);
		i++;
	}
}
