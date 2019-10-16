/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vletterp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 16:22:46 by vletterp          #+#    #+#             */
/*   Updated: 2019/09/15 17:12:47 by vletterp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*sxxd;
	int		len;

	len = 0;
	while (s1[len])
		len++;
	if (!(sxxd = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	sxxd[len] = '\0';
	while (len >= 0)
	{
		sxxd[len] = s1[len];
		len--;
	}
	return (sxxd);
}
