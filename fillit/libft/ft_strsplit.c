/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vletterp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 00:02:49 by vletterp          #+#    #+#             */
/*   Updated: 2019/09/25 00:06:17 by vletterp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_count_words(const char *str, char c)
{
	int	word;
	int	i;

	i = 0;
	word = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		if (str[i] == c && str[i + 1] != c)
			word++;
		i++;
	}
	if (str[0] != '\0')
		word++;
	return (word);
}

static	char	*ft_word(const char *str, char c, int *i)
{
	char	*s;
	int		k;

	if (!(s = (char *)malloc(sizeof(s) * (ft_strlen(str)))))
		return (NULL);
	k = 0;
	while (str[*i] != c && str[*i])
	{
		s[k] = str[*i];
		k++;
		*i += 1;
	}
	s[k] = '\0';
	while (str[*i] == c && str[*i])
		*i += 1;
	return (s);
}

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		wrd;
	char	**sxxd;

	i = 0;
	j = 0;
	if (!s && !c)
		return (NULL);
	if (s == 0 || c == 0)
		return (NULL);
	wrd = ft_count_words(s, c);
	if (!(sxxd = (char **)malloc(sizeof(sxxd) * (ft_count_words(s, c) + 2))))
		return (NULL);
	while (s[i] == c && s[i])
		i++;
	while (j < wrd && s[i])
	{
		sxxd[j] = ft_word(s, c, &i);
		j++;
	}
	sxxd[j] = NULL;
	return (sxxd);
}
