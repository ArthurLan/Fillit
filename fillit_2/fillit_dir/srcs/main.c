/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 21:39:47 by alanter           #+#    #+#             */
/*   Updated: 2017/12/17 12:31:08 by alanter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

int	main(int argc, char **argv)
{
	t_lksquare	square;
	//char tetriminos[1][7];
	//char **tetriminos;
	//char *tetria1;
	
	//square.coordi = {0,1,1,2};
	//square.coordj = {0,0,1,0};
		square.squaresize = 4;
	square.square = (char **)malloc(sizeof(char *)* square.squaresize + 1);
	initializesq(square);
	if (ft_ors(argc, argv, square) == -1)
		exit (0);
	ft_putstr(square.buff);
	//printsq(square);
	if (!((checksq(square.buff)))) //&& checktetri(square.buff)))
	{
		write(2, "The file is invalid\n", 20);
		exit (0);
	}
	return (0);
}
