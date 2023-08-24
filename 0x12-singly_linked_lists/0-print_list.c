#include "lists.h"

/**
* print_list - prints all the elements of a list
*
* @h:pointer to the list
*
*Return: the number of nodes
*/

size_t print_list(const list_t *h)
{
const list_t *nav = h;
size_t count = 0;

while (nav != NULL)
{
if (nav->str != NULL)
printf("[%d] %s\n", nav->len, nav->str);
else
printf("[0] (nil)\n");
count += 1;
nav = nav->next;
}

return (count);
}
