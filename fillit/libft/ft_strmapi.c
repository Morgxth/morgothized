/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vletterp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 17:33:09 by vletterp          #+#    #+#             */
/*   Updated: 2019/09/19 19:28:24 by vletterp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	sxxd;
	char			*resultsxxd;

	if (!s || !(resultsxxd = ft_memalloc((size_t)ft_strlen((char*)s) + 1)))
		return (NULL);
	sxxd = 0;
	while (s[sxxd])
	{
		resultsxxd[sxxd] = f(sxxd, s[sxxd]);
		sxxd++;
	}
	return (resultsxxd);
}
