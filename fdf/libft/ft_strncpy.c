/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vletterp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 12:40:22 by vletterp          #+#    #+#             */
/*   Updated: 2019/09/17 17:30:10 by vletterp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t sxxd;

	sxxd = 0;
	while (src[sxxd] != '\0' && sxxd < len)
	{
		dst[sxxd] = src[sxxd];
		++sxxd;
	}
	while (sxxd < len)
	{
		dst[sxxd] = '\0';
		sxxd++;
	}
	return (dst);
}
