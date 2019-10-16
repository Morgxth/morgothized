/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vletterp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 19:39:28 by vletterp          #+#    #+#             */
/*   Updated: 2019/09/17 19:18:29 by vletterp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *haystack, char *needle)
{
	int sxxd;
	int dssx;

	sxxd = 0;
	if (*needle == '\0')
		return (haystack);
	while (haystack[sxxd] != '\0')
	{
		dssx = 0;
		while (haystack[sxxd + dssx] == needle[dssx])
		{
			dssx++;
			if (needle[dssx] == '\0')
				return (&haystack[sxxd]);
		}
		sxxd++;
	}
	return (0);
}
