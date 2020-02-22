/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vletterp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/29 22:55:00 by vletterp          #+#    #+#             */
/*   Updated: 2020/01/04 18:05:14 by vletterp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H
# include <fcntl.h>
# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include "../libft/libft.h"
# include <math.h>
# include "../minilibx_macos/mlx.h"

typedef struct	s_fdf
{
	float		x;
	float		y;
	float		x1;
	float		y1;
	float		step_x;
	float		step_y;

	int			height;
	int			width;
	int			zoom;
	int			**s_matrix;
	int			color;
	int			z;
	int			z1;
	int			z_zoom;
	int			shift_x;
	int			shift_y;
	int			win_x;
	int			win_y;
	double		angle;

	void		*mlx_ptr;
	void		*win_ptr;
}				fdf;

# define MAX(a, b) (a > b ? a : b)
# define SIGN(a) ((a < 0) ? -a : a)
# define USAGE "Usage:\t./fdf source_file\n"

void			freematrix(fdf **data);
void			zoomandz(fdf *data);
void			printing(fdf *data);
int				deal_key(int key, fdf *data);
void			dokey(int key, fdf *data);
int				iskey(int key);
void			isometric(float *x, float *y, int z, double angle);
void			set_params(fdf *data);
void			draw(fdf *data);
void			drxwfirst(fdf *data);
void			read_file(char *file, fdf *data);
int				height(char *file);
int				width(char *file);
void			grid_matrix(int *s_line, char *line);
void			new_window(int key, fdf *data);
void			change_window_size(int key, fdf *data);
int				check_win_size(int key, fdf *data);
void			full_screen(fdf *data);
void			set_coords1(int x, int y, fdf *data);
void			set_coords2(int x, int y, fdf *data);

#endif
