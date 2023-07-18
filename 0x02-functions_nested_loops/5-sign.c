#include "main.h"

/**
 *print_sign - sign of n
 *@n: parameter
 *Return: 1(+ve) 0 (zero) -1 (_ve)
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
