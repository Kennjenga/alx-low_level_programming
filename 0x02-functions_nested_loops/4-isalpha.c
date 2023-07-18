#include "main.h"

/**
 *_isalpha - checks 4 digits and numbers
 *@c: parameter
 *Return: 1 (success) (otherwise
 */

int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123) || (c > 47 && c < 58))
		return (1);
	else
		return (0);
}
