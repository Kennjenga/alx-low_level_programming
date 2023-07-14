#include <stdio.h>
/**
 * main -  lowercase alphabet in reverse
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int x = 122;

	while (x > 96)
	{
		putchar(x);
		x--;
	}
	putchar('\n');
	return (0);
}
