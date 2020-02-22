/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vletterp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 17:01:36 by vletterp          #+#    #+#             */
/*   Updated: 2019/09/15 17:34:25 by vletterp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(const char *s1, const char *s2)
{
	int sxxd;

	sxxd = 0;
	while (s1[sxxd] == s2[sxxd] && s1[sxxd] != '\0' && s2[sxxd] != '\0')
		sxxd++;
	return ((unsigned char)s1[sxxd] - (unsigned char)s2[sxxd]);
}
