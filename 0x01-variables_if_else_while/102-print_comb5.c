#include <stdio.h>
/**
 * main -  lowercase alphabet in reverse
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int a, b, c, d;

	for (a = 48; a < 58; a++)
	{
		for (b = 48; b < 58; b++)
		{
			for (c = 48; c < 58; c++)
			{
				for (d = (c+1); d < 58; d++)
				{
					putchar(a);
					putchar(b);
					putchar(' ');
					putchar(c);
					putchar(d);
					putchar(',');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
