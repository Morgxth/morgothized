/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   windowsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vletterp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/02 11:24:41 by vletterp          #+#    #+#             */
/*   Updated: 2020/02/22 18:44:08 by vletterp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

int		check_win_size(int key, fdf *data)
{
	if ((key == 0 && data->win_y <= 500) || (key == 6 && data->win_x <= 500))
		return (1);
	if ((key == 1 && data->win_y > 1000) || (key == 7 && data->win_x > 2000))
		return (1);
	return (0);
}

void	full_screen(fdf *data)
{
	static int old_x;
	static int old_y;

	if (data->win_x != 2560)
	{
		old_x = data->win_x;
		old_y = data->win_y;
	}
	data->win_x = (data->win_x == 2560) ? old_x : 2560;
	data->win_y = (data->win_y == 1400) ? old_y : 1400;
}

void	change_window_size(int key, fdf *data)
{
	if (check_win_size(key, data))
		return ;
	if (key == 82)
		full_screen(data);
}

void	new_window(int key, fdf *data)
{
	change_window_size(key, data);
	mlx_destroy_window(data->mlx_ptr, data->win_ptr);
	data->mlx_ptr = mlx_init();
	data->win_ptr = mlx_new_window(data->mlx_ptr, data->win_x,
					data->win_y, "FDF");
	data->shift_x = data->win_x / 3;
	data->shift_y = data->win_y / 3;
	draw(data);
	mlx_key_hook(data->win_ptr, deal_key, data);
	mlx_loop(data->mlx_ptr);
}
