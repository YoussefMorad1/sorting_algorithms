#include "sort.h"
#include <stdio.h>
/**
 * insertion_sort_list - hi
 * @list: the list to sort
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *ptr, *nxt, *bck;

	if (!list)
		return;
	ptr = *list;
	while (ptr && ptr->next)
	{
		nxt = ptr->next;
		if (nxt->n < ptr->n)
		{
			ptr->next = nxt->next;
			if (ptr->next)
				ptr->next->prev = ptr;
			bck = ptr->prev;
			while (bck)
			{
				nxt->next = bck->next;
				nxt->next->prev = nxt;
				bck->next = nxt;
				nxt->prev = bck;
				if (nxt->n >= bck->n)
					break;
				print_list(*list);
				bck->next = nxt->next;
				bck->next->prev = bck;
				bck = bck->prev;
			}
			if (!bck)
			{
				nxt->next = *list;
				nxt->prev = 0;
				(*list)->prev = nxt;
				(*list) = nxt;
			}
			print_list(*list);
			continue;
		}
		ptr = ptr->next;
	}
}
