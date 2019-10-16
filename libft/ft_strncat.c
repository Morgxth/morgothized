/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vletterp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 15:22:38 by vletterp          #+#    #+#             */
/*   Updated: 2019/09/17 18:08:08 by vletterp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
{
	int		sxxd;
	size_t	notsxxd;

	sxxd = ft_strlen(s1);
	notsxxd = 0;
	while (s2[notsxxd] != '\0' && notsxxd < n)
	{
		s1[sxxd] = s2[notsxxd];
		sxxd++;
		++notsxxd;
	}
	s1[sxxd] = '\0';
	return (s1);
}
