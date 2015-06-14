#include "ps.h"


void	small_before_half(t_no *list, int small)
{
	while (small > 0)
	{
		ft_putstr("ra ");
		small--;
		rot(list);
	}
}

void	small_after_half(t_no *list, int small, int len)
{
	while (small < len)
	{
		ft_putstr("rra ");
		revrot(list);
		small++;
	}
}

void	do_pushback(t_no **list1, t_no **list2, int *len1, int *len2)
{
	push(list1, list2);
	(*len1)++;
	(*len2)++;
}
