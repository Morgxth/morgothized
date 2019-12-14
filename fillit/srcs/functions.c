/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vletterp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 17:41:02 by vletterp          #+#    #+#             */
/*   Updated: 2019/12/10 18:14:55 by vletterp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		dotorsharp(int	*line)
{
	if (!line) 
		return(0);
	while(*line)
	{
		if (*line != '.' || *line != '#')
			return(0);
		line++;
	}
	return(1);
}

int		sharpcount(char	*line)
{
	int		count;

	count = 0;
	if (!line)
		return(0);
	while (*line)
	{
		if (*line == '#')
			count++;
		line++;
	}
	return(count);
}


