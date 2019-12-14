/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cavalry.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vletterp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 22:00:04 by vletterp          #+#    #+#             */
/*   Updated: 2019/12/11 23:09:31 by vletterp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		*x_shift(int *tab, int x)
{
	int i;
	int size;

	i = 0;
	size = 4;
	while (size--)
	{
		tab[i] = tab[i] + x;
		x += 2;
	}
	return(tab);
}

int		*y_shift(int *tab, int y)
{
	int i;
	int size;

	i = 1;
	size = 4;
	while (size--)
	{
		tab[i] = tab[i] + y;
		y += 2;
	}
	return (tab);
}

int		*shift_tet(int *tab, int x, int y)
{
	tab = x_shift(tab, x);
	tab = y_shift(tab, y);
	return (tab);
}

int		tabcmp(int *str, int *str1, int n)
{
	int i;

	i = -1;
	while (++i < n)
	{
		if (str[i] != str1[i])
			return(0);
	}
	return(1);
}

char	*get_tetid(int *tet)
{
	char *name;

	name = NULL;
	(tabcmp(tet, SXXD_A, sizeof(tet))) && (name = "SXXD_A");
	(tabcmp(tet, SXXD_B, sizeof(tet))) && (name = "SXXD_B");
	(tabcmp(tet, SXXD_C, sizeof(tet))) && (name = "SXXD_C");
	(tabcmp(tet, SXXD_D, sizeof(tet))) && (name = "SXXD_D");
	(tabcmp(tet, SXXD_E, sizeof(tet))) && (name = "SXXD_E");
	(tabcmp(tet, SXXD_F, sizeof(tet))) && (name = "SXXD_F");
	(tabcmp(tet, SXXD_G, sizeof(tet))) && (name = "SXXD_G");
	(tabcmp(tet, SXXD_H, sizeof(tet))) && (name = "SXXD_H");
	(tabcmp(tet, SXXD_I, sizeof(tet))) && (name = "SXXD_I");
	(tabcmp(tet, SXXD_J, sizeof(tet))) && (name = "SXXD_J");
	(tabcmp(tet, SXXD_K, sizeof(tet))) && (name = "SXXD_K");
	(tabcmp(tet, SXXD_L, sizeof(tet))) && (name = "SXXD_L");
	(tabcmp(tet, SXXD_M, sizeof(tet))) && (name = "SXXD_M");
	(tabcmp(tet, SXXD_N, sizeof(tet))) && (name = "SXXD_N");
	(tabcmp(tet, SXXD_O, sizeof(tet))) && (name = "SXXD_O");
	(tabcmp(tet, SXXD_P, sizeof(tet))) && (name = "SXXD_P");
	(tabcmp(tet, SXXD_Q, sizeof(tet))) && (name = "SXXD_Q");
	(tabcmp(tet, SXXD_R, sizeof(tet))) && (name = "SXXD_R");
	(tabcmp(tet, SXXD_S, sizeof(tet))) && (name = "SXXD_S");
	return(name);
}

int		*convert_id(char *id)
{
	int *tet;

	tet = (int *)malloc(sizeof(int) * 8);
	(ft_strcmp(id, "SXXD_A") == 0) && (dup_coord(tet, SXXD_A));
	(ft_strcmp(id, "SXXD_B") == 0) && (dup_coord(tet, SXXD_B));
	(ft_strcmp(id, "SXXD_C") == 0) && (dup_coord(tet, SXXD_C));
	(ft_strcmp(id, "SXXD_D") == 0) && (dup_coord(tet, SXXD_D));
	(ft_strcmp(id, "SXXD_E") == 0) && (dup_coord(tet, SXXD_E));
	(ft_strcmp(id, "SXXD_F") == 0) && (dup_coord(tet, SXXD_F));
	(ft_strcmp(id, "SXXD_G") == 0) && (dup_coord(tet, SXXD_G));
	(ft_strcmp(id, "SXXD_H") == 0) && (dup_coord(tet, SXXD_H));
	(ft_strcmp(id, "SXXD_I") == 0) && (dup_coord(tet, SXXD_I));
	(ft_strcmp(id, "SXXD_J") == 0) && (dup_coord(tet, SXXD_J));
	(ft_strcmp(id, "SXXD_K") == 0) && (dup_coord(tet, SXXD_K));
	(ft_strcmp(id, "SXXD_L") == 0) && (dup_coord(tet, SXXD_L));
	(ft_strcmp(id, "SXXD_M") == 0) && (dup_coord(tet, SXXD_M));
	(ft_strcmp(id, "SXXD_N") == 0) && (dup_coord(tet, SXXD_N));
	(ft_strcmp(id, "SXXD_O") == 0) && (dup_coord(tet, SXXD_O));
	(ft_strcmp(id, "SXXD_P") == 0) && (dup_coord(tet, SXXD_P));
	(ft_strcmp(id, "SXXD_Q") == 0) && (dup_coord(tet, SXXD_Q));
	(ft_strcmp(id, "SXXD_R") == 0) && (dup_coord(tet, SXXD_R));
	(ft_strcmp(id, "SXXD_S") == 0) && (dup_coord(tet, SXXD_S));
	return(tet);
}
