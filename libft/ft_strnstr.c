/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vletterp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 19:39:28 by vletterp          #+#    #+#             */
/*   Updated: 2019/09/17 19:27:38 by vletterp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t sxxd;
	size_t dssx;

	sxxd = 0;
	if (*needle == '\0')
		return ((char*)haystack);
	while (haystack[sxxd] != '\0' && sxxd < len)
	{
		dssx = 0;
		while (haystack[sxxd + dssx] == needle[dssx]
				&& sxxd + dssx < len)
		{
			dssx++;
			if (needle[dssx] == '\0')
				return ((char*)&haystack[sxxd]);
		}
		sxxd++;
	}
	return (0);
}
