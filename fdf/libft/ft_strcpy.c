/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vletterp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 11:08:12 by vletterp          #+#    #+#             */
/*   Updated: 2019/09/11 13:53:41 by vletterp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dst, const char *src)
{
	int sxxd;

	sxxd = 0;
	while (src[sxxd])
	{
		dst[sxxd] = src[sxxd];
		sxxd++;
	}
	dst[sxxd] = src[sxxd];
	return (dst);
}
