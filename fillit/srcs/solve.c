/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vletterp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 16:00:42 by vletterp          #+#    #+#             */
/*   Updated: 2019/12/07 16:04:15 by vletterp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

int		solve(const char *filename)
{
	t_list		*tetri_lst;

	if (!(tetri list = get_tetriminoes_from_file(filename)))
		return(0);
	if (!solve_squares(&tetri_lst))
		return(0);
	return(1);
}
