#include <stdio.h>
/**
 * main - num using putchar
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int x = 48;

	while (x < 58)
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
