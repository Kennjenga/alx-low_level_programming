#include <stdio.h>
/**
 * main -  numbers of base 16
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int x = 48;
	int c = 97;

	while (x < 58)
	{
		putchar(x);
		x++;
	}
	while (c < 103)
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
