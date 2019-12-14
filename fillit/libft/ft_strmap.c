/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vletterp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 17:13:26 by vletterp          #+#    #+#             */
/*   Updated: 2019/09/19 17:32:13 by vletterp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char *sxd;
	char *sxd2;
	char *sxxd;

	if (!s || !(sxxd = ft_memalloc((size_t)ft_strlen((char*)s) + 1)))
		return (NULL);
	sxd = (char*)s;
	sxd2 = sxxd;
	while (*sxd)
		*(sxd2++) = f(*(sxd++));
	return (sxxd);
}
