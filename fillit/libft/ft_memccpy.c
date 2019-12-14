/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vletterp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 19:42:07 by vletterp          #+#    #+#             */
/*   Updated: 2019/09/17 17:02:44 by vletterp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *restrict dst, const void *restrict src,
		int c, size_t n)
{
	unsigned char		*sxdst;
	const unsigned char *sxdsrc;
	size_t				sxxd;

	sxdst = (unsigned char*)dst;
	sxdsrc = (unsigned char*)src;
	sxxd = 0;
	while (sxxd < n)
	{
		sxdst[sxxd] = sxdsrc[sxxd];
		if (sxdst[sxxd] == (unsigned char)c)
		{
			return ((void*)(sxdst + sxxd + 1));
		}
		sxxd++;
	}
	return (NULL);
}
