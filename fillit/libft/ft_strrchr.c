/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vletterp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 21:46:55 by vletterp          #+#    #+#             */
/*   Updated: 2019/09/17 18:25:14 by vletterp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *sxxd;

	sxxd = 0;
	while (*s)
	{
		if (*s == c)
			sxxd = (char*)s;
		++s;
	}
	if (sxxd)
		return (sxxd);
	if (c == '\0')
		return ((char*)s);
	return (0);
}
