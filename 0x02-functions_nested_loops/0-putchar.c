#include "main.h"
/**
 * main -  program that prints _putchar
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char x[] = "_putchar";
	int y;

	for (y = 0; y < 8; y++)
	{
		_putchar(x[y]);
	}
	_putchar('\n');
	return (0);
}
