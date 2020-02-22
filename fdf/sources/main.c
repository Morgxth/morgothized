/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vletterp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/29 22:53:55 by vletterp          #+#    #+#             */
/*   Updated: 2020/01/04 06:44:41 by vletterp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

void	set_params(fdf *data)
{
	data->zoom = 20;
	data->z_zoom = 2;
	data->win_x = 1500;
	data->win_y = 750;
	data->angle = 0.523599;
	data->shift_x = data->win_x / 2;
	data->shift_y = data->win_y / 2;
	data->mlx_ptr = mlx_init();
	data->win_ptr = mlx_new_window(data->mlx_ptr, data->win_x,
					data->win_y, "FDF");
}

void	freematrix(fdf **data)
{
	int x;

	x = 0;
	while (x < (*data)->height)
	{
		free((*data)->s_matrix[x]);
		(*data)->s_matrix[x] = NULL;
		x++;
	}
	free((*data)->s_matrix);
	free((*data));
}

int		main(int ac, char **av)
{
	fdf		*data;

	if (ac != 2)
	{
		write(1, "Usage: ./fdf map.fdf\n", 21);
		exit(1);
	}
	if (read(open(av[1], O_RDONLY, 0), av[1], 0) == -1)
	{
		write(1, "Error\n", 6);
		exit(1);
	}
	data = (fdf*)malloc(sizeof(fdf));
	read_file(av[1], data);
	set_params(data);
	draw(data);
	mlx_key_hook(data->win_ptr, deal_key, data);
	mlx_loop(data->mlx_ptr);
	freematrix(&data);
	return (0);
}
