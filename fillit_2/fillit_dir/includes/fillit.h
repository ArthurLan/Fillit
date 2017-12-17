/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 15:03:45 by alanter           #+#    #+#             */
/*   Updated: 2017/12/17 12:24:12 by alanter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

#include "../../libft/libft.h"
#include <fcntl.h>
#include <stdio.h>

typedef struct	s_lksquare
{
	int		squaresize;
	int		ntetri;
	int		ilast;
	char 	*buff;
	char	**square;
	char	tetriletter;
	char	coordi[5];
	char	coordj[5];

	struct s_lksquare	*next;
	struct s_lksquare	*previous;
}				t_lksquare;

int		main(int argc, char **argv);	
void	printsq(t_lksquare sqtoprt);
void	initializesq(t_lksquare fstsq);
int		ft_ors(int argc, char **argv, t_lksquare square);
int		checksq(char *file);
int		checktetri(char *file);
#endif
