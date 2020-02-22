/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vletterp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 21:33:42 by vletterp          #+#    #+#             */
/*   Updated: 2019/09/18 21:36:04 by vletterp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	size_t	sxxd;
	char	*dssx;

	if (!(dssx = ft_memalloc(size + 1)))
		return (NULL);
	sxxd = 0;
	while (sxxd < size)
		dssx[sxxd++] = '\0';
	return (dssx);
}
