/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vletterp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 21:35:56 by vletterp          #+#    #+#             */
/*   Updated: 2019/09/24 21:36:30 by vletterp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *actual;
	t_list *next;

	if (alst && *alst)
	{
		actual = *alst;
		while (actual != NULL && actual)
		{
			next = actual->next;
			del(actual->content, actual->content_size);
			free(actual);
			actual = next;
		}
		*alst = NULL;
	}
}
