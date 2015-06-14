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

#include "ps.h"

int			ordered(t_no *list)
{
	if (!list)
		return (-1);
	while (list && list->next)
	{
		if (list->val > list->next->val)
			return (0);
		list = list->next;
	}
	return (1);
}

int		smallest(t_no *list)
{
	int i;
	int index;
	int val;

	index = 0;
	i = 0;
	val = list->val;
	while (list)
	{
		if (list->val < val)
		{
			val = list->val;
			index = i;
		}
		list = list->next;
		i++;
	}
	return (index);
}

int		operation(t_no *list, int lena, int lenb, int n)
{
	if ((ordered(list) && n == 1) || (reverseorder(list) && n == 2))
		return (0);
	if ((reverseorder(list) && n == 1) || (ordered(list) && n == 2))
		return (1);
	if (smallest(list) == 1 && n == 1)
		return (2);
	if ((smallest(list) == 0) && n == 1)
		return (3);
	if (smallest(list) > lena / 2 && n == 1)
		return (4);
	if (smallest(list) <= lena / 2 && n == 1)
		return (5);
	else
		return (-1);
}

void	final(t_no **lista, t_no **listb, int *lenb)
{
	int i;

	i = 0;       
	while(*lenb != 0)
	{
		i++;
		pushback(*lista, (*listb)->val);
		*listb = (*listb)->next;
		ft_putstr("pa ");
		(*lenb)--;
	}
	*lenb = 0;
}


int		push_swap(t_no *lista, t_no *listb, int lena, int lenb)
{
	int opa;
	int opb;
	
	if (lena <= 3 && !ordered(lista))
		return (sort_upto_3(lista, lena, 1));
	while (!ordered(lista) || lenb != 0)
	{
		opa = operation(lista, lena, lenb, 1);
		opb = operation(listb, lena, lenb, 2);
		if (lena <= 3 && !ordered(lista))
			sort_upto_3(lista, lena, 1);
		else if (lena <= 3)
			final(&lista, &listb, &lenb);
		else if (opa == 0 && opb == 0)
			final(&lista, &listb, &lenb);
		else if (opa == 2)
			swap(lista);
		else if (opa == 3)
		{
			ft_putstr("pb ");
			listb = pushback(listb, lista->val);
			lista = lista->next;
			lena--;
			lenb++;
		}
		else if (opa == 4)
			small_after_half(lista, smallest(lista), lena);
		else if (opa == 5)
			small_before_half(lista, smallest(lista));
	}
	return (0);
}
