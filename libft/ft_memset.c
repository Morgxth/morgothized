/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vletterp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 17:42:27 by vletterp          #+#    #+#             */
/*   Updated: 2019/09/15 18:13:52 by vletterp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*sxxd;

	sxxd = (unsigned char*)b;
	if (len != 0)
	{
		while (len-- > 0)
			*(sxxd++) = (unsigned char)c;
	}
	return (b);
}
