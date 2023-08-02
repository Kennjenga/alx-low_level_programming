#include "main.h"

/**
 *_pow_recursion - x power of y
 *@x: para
 *@y: para
 *Return: _pow_recursion X**Y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (_pow_recursion(x, y - 1) * x);
}
