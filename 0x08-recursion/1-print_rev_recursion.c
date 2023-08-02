#include "main.h"

/**
 *_print_rev_recursion - main func 4 rev
 *@s: parameter pointer
 *return: nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
