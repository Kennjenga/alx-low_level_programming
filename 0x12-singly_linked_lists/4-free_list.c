#include "lists.h"

/**
 *free_list - Frees a list
 *@head: A pointer to the list head
 *
 */

void free_list(list_t *head)
{
	list_t *dta_del;

	while (head)
	{
		dta_del = head->next;
		free(head->str);
		free(head);
		head = dta_del;
	}
}
