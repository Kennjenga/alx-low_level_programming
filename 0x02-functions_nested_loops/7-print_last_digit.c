#include "main.h"

/**
 *print_last_digit - last digit of i
 *@i: parameter
 *Return: m last digit
 */

int print_last_digit(int i)
{
	int m = i % 10;

	if (m < 0)
	{
		_putchar(-m + 48);
		return (-m);
	}
	else
	{
		_putchar(m + 48);
		return (m);
	}
}
