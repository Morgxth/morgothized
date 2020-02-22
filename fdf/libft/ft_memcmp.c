/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vletterp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 18:42:42 by vletterp          #+#    #+#             */
/*   Updated: 2019/09/17 17:17:31 by vletterp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*s1sxxd;
	const unsigned char	*s2sxxd;
	size_t				sxxd;

	s1sxxd = (unsigned char*)s1;
	s2sxxd = (unsigned char*)s2;
	sxxd = 0;
	if (n == 0)
		return (0);
	while (*s1sxxd == *s2sxxd && ++sxxd < n)
	{
		s1sxxd++;
		s2sxxd++;
	}
	return ((int)(*s1sxxd - *s2sxxd));
}
