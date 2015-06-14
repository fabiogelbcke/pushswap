#include "ps.h"

void	swap(t_no *list)
{
	int tmp;
	
	if (list && list->next)
	{
		tmp = list->next->val;
		list->next->val = list->val;
		list->val = tmp;
		list = list->next;
	}
}

void	revrot(t_no *list)
{
	t_no *ptr;
	int tmp;
	int tmp2;

	ptr = list;
	tmp = ptr->val;
	while (ptr && ptr->next)
	{
		tmp2 = ptr->next->val;
		if (ptr->next)
			ptr->next->val = tmp;
		tmp = tmp2;
		ptr = ptr->next;
	}
	list->val = tmp;
}

void	push(t_no **list1, t_no **list2)
{
	t_no *ptr1;
	t_no *ptr2;

	ptr1 = *list1;
	ptr2 = *list2;
	ft_putstr("oi");
	ptr1 = pushback(ptr1, ptr2->val);
	if (ptr2->next)
		ptr2 = ptr2->next;
	else
		ptr2 = NULL;
	print_list(ptr1);
	print_list(ptr2);
		
}

void	rot(t_no *list)
{
	int tmp;
	t_no *ptr;

	ptr = list;
	tmp = list->val;
	while (ptr && ptr->next)
	{
		ptr->val = ptr->next->val;
		ptr = ptr->next;
	}
	ptr->val = tmp;
}
