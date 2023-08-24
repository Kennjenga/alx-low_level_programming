#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list
 *@head: pointer to the head of the list
 *@str: string to be added
 *
 * Return:address to the new element (NULL) if failed
*/

list_t *add_node(list_t **head, const char *str)
{
	char *data;
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	data = strdup(str);
	if (data == NULL)
	{
		free(new);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;

	new->str = data;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);

}
