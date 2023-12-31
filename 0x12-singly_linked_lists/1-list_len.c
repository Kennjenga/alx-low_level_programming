#include "lists.h"

/**
 * list_len - num of elements in a linked list
 *@h: pointer to the list
 *
 *Return: the num of elements
*/

size_t list_len(const list_t *h)
	{
		size_t len = 0;

		while (h)
		{
			len++;
			h = h->next;
		}

		return (len);
	}
