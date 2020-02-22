/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vletterp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 19:31:04 by vletterp          #+#    #+#             */
/*   Updated: 2019/09/19 19:53:35 by vletterp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*subsxxd;

	if (!s || !(subsxxd = ft_memalloc(len + 1)))
		return (NULL);
	subsxxd = ft_strncpy(subsxxd, (char*)s + start, len);
	return (subsxxd);
}
