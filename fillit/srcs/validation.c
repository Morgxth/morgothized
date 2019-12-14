/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   infantry.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vletterp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 13:05:59 by vletterp          #+#    #+#             */
/*   Updated: 2019/12/11 18:27:34 by vletterp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		low_x(int *tab)
{
	int	i;
	int x;
	int size;

	size = 4;
	i = 0;
	x = tab[i];
	while (size--)
	{
		if (tab[i] >= 0 && tab[i] <= 3)
			if (tab[i] < x)
				x = tab[i];
		i += 2;
	}
	return(x);
}

int		low_y(int *tab)
{
	int i;
	int y;
	int size;

	size = 4;
	i = 0;
	y = tab[i];
	while (size--)
	{
		if (tab[i] >= 0 && tab[i] <= 3)
			if (tab[i] < y)
				y = tab[i];
		i += 2;
	}
	return(y);
}	

int		*one_tetramino(const int fd, char *line)
{
	int i;
	int x;
	int y;
	int *tab;

	y = -1;
	i = 0;
	tab = (int *)malloc(sizeof(int) * 8);
	while(++y <= 3)
	{
		x = 0;
		get_next_line(fd, &line);
		while (line[x])
		{
			if (line[x] == '#')
			{
				tab[i] = x;
				tab[i + 1] = y;
				i += 2;
			}
			x++;
		}
		free(line);
	}
	return (tab);
}

int		trans_of_tet(int *tab)
{
	int xl;
	int yl;
	int i;
	int size;

	size = 4;
	xl = low_x(tab);
	yl = low_y(tab);
	i = 0;
	while (size--)
	{
		tab[i] -= lx;
		tab[i + 1] -= ly;
		i += 2;
	}
	return(tab);	
}
