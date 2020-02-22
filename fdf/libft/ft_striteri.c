/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vletterp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 19:27:28 by vletterp          #+#    #+#             */
/*   Updated: 2019/09/25 01:26:20 by vletterp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int sxxd;

	sxxd = 0;
	if (!s || !f)
		return ;
	while (s[sxxd])
	{
		f(sxxd, &s[sxxd]);
		sxxd++;
	}
}
