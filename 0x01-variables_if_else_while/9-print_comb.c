#include <stdio.h>
/**
 * main -  lowercase alphabet in reverse
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n = 48;

	for (n; n < 58; n++)
	{
		putchar(n);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
