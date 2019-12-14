/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vletterp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 15:51:58 by vletterp          #+#    #+#             */
/*   Updated: 2019/12/11 21:35:35 by vletterp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include "../libft/libft.h"

typedef struct		s_tetris
{
	void			*tet_id;
	char			c;
	struct s_tetris *next;
}					t_tetris;

# define SXXD_A (int [8]) {0,0,0,1,0,2,0,3}
# define SXXD_B (int [8]) {0,0,1,0,2,0,3,0}
# define SXXD_C (int [8]) {0,0,1,0,0,1,1,1}
# define SXXD_D (int [8]) {0,0,0,1,0,2,1,2}
# define SXXD_E (int [8]) {0,0,1,0,2,0,0,1}
# define SXXD_F (int [8]) {0,0,1,0,1,1,1,2}
# define SXXD_G (int [8]) {2,0,0,1,1,1,2,1}
# define SXXD_H (int [8]) {1,0,1,1,0,2,1,2}
# define SXXD_I (int [8]) {0,0,0,1,1,1,2,1}
# define SXXD_J (int [8]) {0,0,1,0,0,1,0,2}
# define SXXD_K (int [8]) {0,0,1,0,2,0,2,1}
# define SXXD_L (int [8]) {1,0,0,1,1,1,2,1}
# define SXXD_M (int [8]) {0,0,0,1,1,1,0,2}
# define SXXD_N (int [8]) {0,0,1,0,2,0,1,1}
# define SXXD_O (int [8]) {1,0,0,1,1,1,1,2}
# define SXXD_P (int [8]) {1,0,2,0,0,1,1,1}
# define SXXD_Q (int [8]) {0,0,0,1,1,1,1,2}
# define SXXD_R (int [8]) {0,0,1,0,1,1,2,1}
# define SXXD_S (int [8]) {1,0,0,1,1,1,0,2}

int					low_x(int *tab)
int					low_y(int *tab)
int					*one_tetramino(const int fd, char *line)
int					trans_of_tet(int *tab)

#endif
