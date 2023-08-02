#include "main.h"

/**
 *_strlen_recursion - main func 4 len
 *@s: pointer parameter
 *
 *Return: length
 */

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s != '\0')
	{
		length++;
		length += _strlen_recursion(s + 1);
	}
	return (length);
}
