/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vletterp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 17:04:09 by vletterp          #+#    #+#             */
/*   Updated: 2019/09/17 19:32:57 by vletterp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t sxxd;

	sxxd = 0;
	if (n == 0)
		return (0);
	while (s1[sxxd] == s2[sxxd] && s1[sxxd] && s2[sxxd] && sxxd < n - 1)
		++sxxd;
	return ((unsigned char)s1[sxxd] - (unsigned char)s2[sxxd]);
}
