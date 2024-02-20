#include "sort.h"

/**
 * insertion_sort_list - a function that sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm
 * @list: The list to be sorted
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *prev;

	if ((*list) == NULL || (*list)->next == NULL)
		return;

	current = (*list)->next;
	while (current != NULL)
	{
		prev = current->prev;
		while (prev != NULL && prev->n > current->n)
		{
			if (prev->prev)
				prev->prev->next = current;
			if (current->next)
				current->next->prev = prev;
			prev->next = current->next;
			current->prev = prev->prev;
			prev->prev = current;
			current->next = prev;

			prev = current->prev;
			if (prev == NULL)
				*list = current;
			print_list(*list);
		}
		current = current->next;
	}
}
