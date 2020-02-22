/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vletterp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/29 23:03:29 by vletterp          #+#    #+#             */
/*   Updated: 2020/01/04 06:45:44 by vletterp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"
#include <math.h>

void	zoomandz(fdf *data)
{
	data->z = data->s_matrix[(int)data->y][(int)data->x];
	data->z1 = data->s_matrix[(int)data->y1][(int)data->x1];
	data->x *= data->zoom;
	data->y *= data->zoom;
	data->x1 *= data->zoom;
	data->y1 *= data->zoom;
	data->z *= data->z_zoom;
	data->z1 *= data->z_zoom;
}

void	set_coords1(int x, int y, fdf *data)
{
	data->x = x;
	data->y = y;
	data->x1 = data->x + 1;
	data->y1 = data->y;
}

void	set_coords2(int x, int y, fdf *data)
{
	data->x = x;
	data->y = y;
	data->x1 = data->x;
	data->y1 = data->y + 1;
}

void	drxwfirst(fdf *data)
{
	float step_x;
	float step_y;
	float max;

	zoomandz(data);
	data->color = (data->z || data->z1) ? 0xFFFF00 : 0x008000;
	data->color = (data->z != data->z1) ? 0x00FF00 : data->color;
	isometric(&data->x, &data->y, data->z, data->angle);
	isometric(&data->x1, &data->y1, data->z1, data->angle);
	data->x += data->shift_x;
	data->y += data->shift_y;
	data->x1 += data->shift_x;
	data->y1 += data->shift_y;
	step_x = data->x1 - data->x;
	step_y = data->y1 - data->y;
	max = MAX(SIGN(step_x), SIGN(step_y));
	step_x /= max;
	step_y /= max;
	while ((int)(data->x - data->x1) || (int)(data->y - data->y1))
	{
		mlx_pixel_put(data->mlx_ptr, data->win_ptr, data->x,
					data->y, data->color);
		data->x += step_x;
		data->y += step_y;
	}
}

void	draw(fdf *data)
{
	int x;
	int y;

	printing(data);
	y = 0;
	while (y < data->height)
	{
		x = 0;
		while (x < data->width)
		{
			if (x < data->width - 1)
			{
				set_coords1(x, y, data);
				drxwfirst(data);
			}
			if (y < data->height - 1)
			{
				set_coords2(x, y, data);
				drxwfirst(data);
			}
			x++;
		}
		y++;
	}
}
