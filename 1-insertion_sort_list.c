#include "sort.h"

/**
 * swap_list - a function to swap two nodes integers
 * @previous: previous node of doubly linked list
 * @temp: node to be swapped
 * @after: next node of doubly linked list
 * @list:  head of list
 */
void swap_list(listint_t *previous, listint_t *temp, listint_t *after, listint_t **list)
{
	while (previous && temp->n < previous->n)
	{
		/* handle next node */
		if (after)
			after->prev = previous;

		/* handle temp node */
		temp->next = previous;
		temp->prev = previous->prev;

		/* handle previous node */
		if (previous->prev)
			(previous->prev)->next = temp;
		previous->prev = temp;
		previous->next = after;

		/* reset comparison values */
		after = previous;
		previous = temp->prev;
		if ((*list)->prev)
			*list = (*list)->prev;
		print_list(*list);
	}
}

/**
 * insertion_sort_list - sorts a list with insertion sort
 * @list: input list to sort
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *temp, *previous, *after;

	if (!list && !(*list) && !(*list)->next)
		return;

	temp = (*list)->next;
	previous = temp->prev;
	after = temp->next;

	while (temp)
	{
		if (temp->n < previous->n)
		{
			swap_list(previous, temp, after, list);
		}
		temp = after;
		if (temp)
		{
			after = temp->next;
			previous = temp->prev;
		}
	}
}
