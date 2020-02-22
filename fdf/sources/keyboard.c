/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keyboard.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vletterp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/02 10:57:36 by vletterp          #+#    #+#             */
/*   Updated: 2020/01/04 06:50:17 by vletterp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

int		iskey(int key)
{
	return (key == 123 || key == 124 || key == 125 || key == 126 ||
			key == 83 || key == 89 || key == 85 || key == 92 ||
			key == 82 || key == 91 || key == 84 || key == 69 ||
			key == 87 || key == 78 || key == 86 || key == 49 ||
			key == 88);
}

void	dokey(int key, fdf *data)
{
	if (key == 69)
		data->zoom += 5;
	if (key == 78)
		data->zoom -= 5;
	if (key == 126)
		data->shift_y -= 50;
	if (key == 125)
		data->shift_y += 50;
	if (key == 123)
		data->shift_x -= 50;
	if (key == 124)
		data->shift_x += 50;
	if (key == 91)
		data->angle += 0.05;
	if (key == 84)
		data->angle -= 0.05;
	if (key == 86)
		data->z_zoom += 1.5;
	if (key == 88)
		data->z_zoom -= 1.5;
}

int		deal_key(int key, fdf *data)
{
	if (iskey(key))
	{
		mlx_clear_window(data->mlx_ptr, data->win_ptr);
		dokey(key, data);
		draw(data);
	}
	if (key == 83 || key == 85 || key == 92 || key == 89 || key == 82)
		new_window(key, data);
	if (key == 53)
	{
		mlx_destroy_window(data->mlx_ptr, data->win_ptr);
		free(data);
		exit(0);
	}
	return (0);
}
