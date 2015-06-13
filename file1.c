/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/13 18:19:22 by fschuber          #+#    #+#             */
/*   Updated: 2015/06/13 20:33:49 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ordered(t_no *list)
{
	if (!list)
		return (-1);
	while (list && list->next)
	{
		if (list->value > list->next->value)
			return (0);
		list = list->next;
	}
	return (1);
}

void		push_swap(t_no *list)
{

}
