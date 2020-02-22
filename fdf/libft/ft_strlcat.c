/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vletterp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 17:53:11 by vletterp          #+#    #+#             */
/*   Updated: 2019/09/17 18:08:38 by vletterp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t size)
{
	const char	*sxdst;
	const char	*sxdsrc;
	size_t		sxdsize;
	size_t		sxdlen;

	sxdst = dst;
	sxdsrc = src;
	sxdsize = size;
	while (sxdsize-- != 0 && *dst != '\0')
		dst++;
	sxdlen = dst - sxdst;
	sxdsize = size - sxdlen;
	if (sxdsize-- == 0)
		return (sxdlen + ft_strlen(src));
	while (*src != '\0')
	{
		if (sxdsize != 0)
		{
			*dst++ = *src;
			sxdsize--;
		}
		src++;
	}
	*dst = '\0';
	return (sxdlen + (src - sxdsrc));
}
