/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vletterp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/02 11:10:53 by vletterp          #+#    #+#             */
/*   Updated: 2020/02/22 18:44:38 by vletterp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

void	printing(fdf *data)
{
	char *string;

	string = "Zoom: +, -; Fullscreen: 0;";
	mlx_string_put(data->mlx_ptr, data->win_ptr, 10, 5, 0xFFA500, string);
	string = "Angle change: 8, 2; Move: up, down, left, right";
	mlx_string_put(data->mlx_ptr, data->win_ptr, 10, 25, 0xFFA500, string);
	string = "Z-Scale: 4, 6";
	mlx_string_put(data->mlx_ptr, data->win_ptr, 10, 45, 0xFFA500, string);
}
