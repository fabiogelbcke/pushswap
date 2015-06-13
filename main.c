/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/13 16:36:28 by fschuber          #+#    #+#             */
/*   Updated: 2015/06/13 18:19:11 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps.h"

int			is_number(char *c)
{
	while (*c)
	{
		if (*c < 48)
			return (0);
		if (*c > 57)
			return (0);
		c++;
	}
	return (1);
}

int			is_double(int value, t_no *list)
{
	while (list)
	{
		if ((list->value) == value)
			return (1);
		list = list->next;
	}
	return (0);
}

t_no		*pushback(t_no *list, int value)
{
	t_no	*new;

	new = malloc(sizeof(t_no));
	new->next = list;
	new->value = value;

	return (new);
}

int			main(int ac, char **av)
{
	t_no	*list;
	int		i;

	list = NULL;
	i = ac - 1;
	if (ac == 1)
	{
		ft_putstr("Usage: ./push_swap [numbers]");
		return (1);
	}
	while (i > 0)
	{
		if (is_number(av[i]) && !is_double(ft_atoi(av[i]), list))
			list = pushback(list, ft_atoi(av[i]));
		else
		{
			ft_putstr("Error\n");
			return (1);
		}
		i--;
	}
	push_swap(list);
	return (1);
}
