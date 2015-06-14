#include "ps.h"

int	reverseorder(t_no *list)
{
	if (!list)
		return (-1);
	while (list && list->next)
	{
		if (list->val < list->next->val)
			return (0);
		list = list->next;
	}
	return (1);
}

int sort_upto_3(t_no *list, int len, int n)
{
	if (len == 2)
	{
		ft_putstr("sa ");
		swap(list);
	}
	else if (len == 3)
	{
		if (smallest(list) == 0)
		{
			ft_putstr("rra sa ");
			revrot(list);
			swap(list);
		}
		else if (smallest(list) == 1)
		{
			if (list->next->next->val > list->val)
			{
				ft_putstr("sa ");
				swap(list);
			}
			else
			{
				ft_putstr("ra ");
				rot(list);
			}
		}
		else
		{
			if (reverseorder(list))
			{
				ft_putstr("sa ");
				swap(list);
			}
			ft_putstr("rra ");
			revrot(list);
		}
	}
	return (1);
}

int	is_reversed(t_no *list)
{
	while (!ordered(list))
	{
		rot(list);
		ft_putstr("la\n");
	}
	ft_putstr("\n");
	return (0);
}
