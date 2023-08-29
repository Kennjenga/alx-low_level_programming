#include "main.h"
#include <stdlib.h>

/**
 *malloc_checked -  allocates memory using malloc
 *
 *@b: size of memory
 *Return: alloc (success)
 */

void *malloc_checked(unsigned int b)
{
	void *alloc;

	alloc = malloc(b);
	if (alloc == NULL)
		exit(98);
	return (alloc);
}
