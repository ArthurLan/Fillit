/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gofernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 17:10:41 by gofernan          #+#    #+#             */
/*   Updated: 2017/12/17 12:32:04 by alanter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

int ft_ors(int argc, char **argv, t_lksquare square)
{
	int fd;
	char buff[546];
	int numr;

	if (argc != 2)
	{
		write(2, "usage: ./fillit source_file\n", 28);
		return (-1);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		write(2, "opening the file failed\n", 24);
		return (-1);
	}
	if ((numr = read(fd, buff, 546)) < 0)
	{
		write(2, "reading the file failed\n", 24);
		return (-1);
	}
	square.buff = buff;
	ft_putstr(square.buff);
	ft_putnbr(ft_strlen(square.buff));
	return (0);
}
