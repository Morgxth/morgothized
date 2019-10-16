/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vletterp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 19:15:50 by vletterp          #+#    #+#             */
/*   Updated: 2019/09/24 21:46:09 by vletterp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char	*sxxd1;
	char	*sxxd2;

	if (n == 0 || dst == src)
		return (dst);
	sxxd1 = (char *)dst;
	sxxd2 = (char *)src;
	while (--n)
		*sxxd1++ = *sxxd2++;
	*sxxd1 = *sxxd2;
	return (dst);
}
