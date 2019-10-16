/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vletterp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 20:21:33 by vletterp          #+#    #+#             */
/*   Updated: 2019/09/17 17:10:14 by vletterp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		*sxds;
	size_t				sxxd;

	sxds = (unsigned char*)s;
	sxxd = 0;
	while (++sxxd <= n)
	{
		if (*(sxds++) == (unsigned char)c)
			return ((void*)(sxds - 1));
	}
	return (0);
}
