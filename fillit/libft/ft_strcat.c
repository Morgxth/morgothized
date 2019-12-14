/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vletterp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 14:56:35 by vletterp          #+#    #+#             */
/*   Updated: 2019/09/17 18:08:02 by vletterp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *restrict s1, const char *restrict s2)
{
	unsigned int sxxd;
	unsigned int notsxxd;

	sxxd = ft_strlen(s1);
	notsxxd = 0;
	while (s2[notsxxd] != '\0')
	{
		s1[sxxd] = s2[notsxxd];
		sxxd++;
		++notsxxd;
	}
	s1[sxxd] = '\0';
	return (s1);
}
