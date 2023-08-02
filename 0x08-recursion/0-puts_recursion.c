#include "main.h"

/**
 *_puts_recursion - main func
 *@s: pointer parameter
 *return: nothing
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(s[0]);
		_puts_recursion(s + 1);
	}
}
