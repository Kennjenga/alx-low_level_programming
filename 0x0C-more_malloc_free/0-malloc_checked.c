#include "main.h"
#include <stdlib.h>
#include <stdio.h>

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
	if (alloc == Null)
		return (98);
	return (alloc);
}
