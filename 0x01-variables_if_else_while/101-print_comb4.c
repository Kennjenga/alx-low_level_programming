#include <stdio.h>
/**
 * main - the smallest combination of three digits1~
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int x, y, z;

	for (x = 48; z < 58; x++)
	{
		for (y = (x + 1); y < 58; y++)
		{
			for (z = (y + 1); z < 58; z++)
			{
				putchar(x);
				putchar(y);
				putchar(z);
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
