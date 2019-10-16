/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vletterp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 21:36:39 by vletterp          #+#    #+#             */
/*   Updated: 2019/09/24 21:38:16 by vletterp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *list;
	t_list *new;

	list = NULL;
	if (lst && f)
	{
		new = f(lst);
		list = new;
		lst = lst->next;
		while (lst)
		{
			new->next = f(lst);
			new = new->next;
			lst = lst->next;
		}
	}
	return (list);
}
