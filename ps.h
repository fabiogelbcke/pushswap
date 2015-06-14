/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/13 16:36:24 by fschuber          #+#    #+#             */
/*   Updated: 2015/06/13 17:50:25 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PS_H
# define PS_H

typedef struct		s_no
{
	int				val;
	struct s_no		*next;
}					t_no;

# include <unistd.h>
# include <stdlib.h>
# include "libft/Includes/libft.h"

void	swap(t_no *list);
void	revrot(t_no *list);
void	push(t_no **list1, t_no **list2);
void	rot(t_no *list);
int	reverseorder(t_no *list);
int sort_upto_3(t_no *list, int len, int n);
int	is_reversed(t_no *list);
int			ordered(t_no *list);
int		smallest(t_no *list);
int		operation(t_no *list, int lena, int lenb, int n);
int		push_swap(t_no *lista, t_no *listb, int lena, int lenb);
int			is_double(int value, t_no *list);
t_no		*pushback(t_no *list, int value);
int			is_number(char *c);
void			print_list(t_no *list);
void	final(t_no **lista, t_no **listb, int *lenb);
void	small_before_half(t_no *list, int small);
void	small_after_half(t_no *list, int small, int len);
void	do_pushback(t_no **list1, t_no **list2, int *len1, int *len2);


#endif
