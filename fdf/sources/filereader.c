/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filereader.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vletterp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/29 23:03:29 by vletterp          #+#    #+#             */
/*   Updated: 2020/01/04 06:49:41 by vletterp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

int		height(char *file)
{
	int		height;
	int		fd;
	char	*line;

	height = 0;
	fd = open(file, O_RDONLY, 0);
	while (get_next_line(fd, &line))
	{
		height++;
		free(line);
	}
	free(line);
	close(fd);
	return (height);
}

int		width(char *file)
{
	int		width;
	int		sxxd;
	int		fd;
	char	*line;

	width = 0;
	sxxd = 0;
	fd = open(file, O_RDONLY, 0);
	get_next_line(fd, &line);
	width = ft_wdcounter(line, ' ');
	free(line);
	close(fd);
	return (width);
}

void	grid_matrix(int *s_line, char *line)
{
	char	**numbs;
	int		i;

	numbs = ft_strsplit(line, ' ');
	i = 0;
	while (numbs[i])
	{
		s_line[i] = ft_atoi(numbs[i]);
		free(numbs[i]);
		i++;
	}
	free(numbs);
}

void	read_file(char *file, fdf *data)
{
	int		fd;
	int		s;
	char	*line;

	data->height = height(file);
	data->width = width(file);
	data->s_matrix = (int **)malloc(sizeof(int*) * (data->height));
	s = 0;
	while (s < data->height)
		data->s_matrix[s++] = (int*)malloc(sizeof(int) * (data->width + 1));
	fd = open(file, O_RDONLY, 0);
	s = 0;
	while (get_next_line(fd, &line))
	{
		grid_matrix(data->s_matrix[s], line);
		free(line);
		s++;
	}
	free(line);
	close(fd);
	data->s_matrix[s] = NULL;
}
