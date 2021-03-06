/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vletterp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 16:14:33 by vletterp          #+#    #+#             */
/*   Updated: 2019/11/21 16:16:51 by vletterp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "solve.h"

int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		return (1);
	}
	if (!solve(argv[1]))
		write(1, "error\n", 6);
	return (0);
}
